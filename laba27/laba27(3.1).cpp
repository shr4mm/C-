#include <iostream>
using namespace std;

const int DivideByZero = 111;

float internaldiv(float arg1, float arg2) {
    if (arg2 == 0) {
        throw DivideByZero; 
    }
    return arg1 / arg2; 
}
void div(float arg1, float arg2) {
    float result = internaldiv(arg1, arg2);
    cout << result << endl;
}

int main(void) {
float a, b;
 while (cin >> a ) {
     cin >> b;
        try {
            div(a, b);
        }
        catch (int e) {
            if (e == DivideByZero) {
                cout << "Your input is not valid. You can't divide by zero." << endl;
            }
        }
    }
return 0;
}