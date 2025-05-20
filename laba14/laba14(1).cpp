#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(void) {
	srand(time(NULL));
	float *mas=new float[10];
	int positive_number=0;
	int negative_number=0;
	for (int i=0; i<10; i++) {
		mas[i] = (rand() % 5 - 2)/float((rand()%5+2));
		cout << setprecision(2) << mas[i] << endl;
	}
	for (int i=0; i<10; i++) {
		if(mas[i]>=0) {
			positive_number++;
		}
		else {
			negative_number++;
		}
	}
	cout<<  "Кількість додатніх чисел: " << positive_number << endl;
    cout << "Кількість відємних чисел:  " << negative_number << endl;
	delete[] mas;


	return 0;

}