#include <iostream>
using namespace std;
int main(void) {
int a = 0, b = 0, c = 0;
cin >> b;
cin >> a;
   try {
    if (b == 0){
            throw "Division by zero!";
    }
        c = a / b;
        cout << c << endl;
    }
    catch (...) {
        cout << "Your input is not valid, you can't divide by zero." << endl;
    }
return 0;
}