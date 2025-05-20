#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib> 
using namespace std;

class Fraction {
public:
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble();
private:
    int numerator;
    int denominator;
};

Fraction::Fraction(int num, int den) {
    numerator = num;
    denominator = den;
}

string Fraction::toString() {
    int whole = numerator / denominator;
    int remainder = abs(numerator % denominator);
    int sign = (numerator * denominator < 0) ? -1 : 1;

    if (remainder == 0) {
        return to_string(whole);
    } else if (whole != 0) {
        return to_string(whole) + " " + to_string(remainder) + "/" + to_string(abs(denominator));
    } else {
        string signStr = (sign < 0) ? "-" : "";
        return signStr + to_string(remainder) + "/" + to_string(abs(denominator));
    }
}

double Fraction::toDouble() {
    return (double)(numerator) / denominator;
}

int main() {
    int num, den;
    string input = "";
    getline(cin, input);
    stringstream ss(input);

    char slash;
    ss >> num >> slash >> den;

    Fraction fraction(num, den);
    cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;

    return 0;
}