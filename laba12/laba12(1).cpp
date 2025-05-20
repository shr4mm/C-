#include <iostream>
using namespace std;

int main() {

 int vector[] = {3, -50, 7, 10, -4, 14, 5, 2, -13};
 int n = sizeof(vector) / sizeof(vector[0]);
 int *p = vector;
 int *minNumber = vector;

 for (int i = 0; i < n; i++) {
  if (*minNumber > *(p + i)) {
   minNumber = p + i;
  }
//   cout << p + i<< endl;
 }

    cout << "Найменше число: " << *minNumber << endl;

 return 0;
}