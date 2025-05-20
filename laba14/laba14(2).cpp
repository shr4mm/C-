#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(void) {
	srand(time(NULL));
	 int **mas = new int*[3]; 
	 int odd_number=0;
	int even_number=0;
	for (int i = 0; i < 3; i++) {
        mas[i] = new int[3]; 
    }	
	for (int i=0; i<3; i++) {
	    for(int j=0;j<3;j++){
		mas[i][j] = (rand() % 10 + 1);
		  cout << '\t' <<  mas[i][j] << '\t'; 
        }
        cout << endl;  
	    
	}
	 cout << endl;  
		for (int i=0; i<3; i++) {
	    for(int j=0;j<3;j++){
	         if(mas[i][j]%2==0){
		        even_number++;
		    }
		    else{
		        odd_number++;
		    }
	        if(i!=j && 3 - 1 - i != j){
			    mas[i][j]=0;
	        }
	       
	        cout << '\t' << setprecision(2) << mas[i][j] << '\t'; 
	        
        }
        
        cout << endl;  
	    
	}
 cout << endl; 
    cout<<  "Кількість парних чисел: " << even_number << endl;
    cout << "Кількість непарних чисел:  " << odd_number << endl;
	

		return 0;

	}