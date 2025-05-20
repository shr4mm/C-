#include <iostream>
using namespace std;

int main() {
	int array[3][3] =
	{
		{ 2, 4, 3 },
		{ 1, 3, 4 },
		{ 8, 9, 11}
	};
	int odd_number=0;
	int even_number=0;
	int size=sizeof(array)/sizeof(array[0]);
	int *ptr=&array[0][0];
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
		    if(*(ptr+i*3+j)%2==0){
		        even_number++;
		    }
		    else{
		        odd_number++;
		    }
		   
		    if(i!=j && size-1-i!=j){
			    *(ptr+i*3+j)=0;
		    }
		}
	}

	for(int i = 0; i<3; i++) {
		for(int j = 0; j<3; j++) {
			cout.width(4);
			cout<<array[i][j];
		}
		cout <<endl;
	}
	cout<<  "Кількість парних чисел: " << even_number << endl;
    cout << "Кількість непарних чисел:  " << odd_number << endl;


	return 0;
}