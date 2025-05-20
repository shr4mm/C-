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
    bool isGreaterThan(Fraction that);
    bool isLessThan(Fraction that);
    bool isEqual(Fraction that);
private:
void reduce();
int gcd(int a, int b);
    int numerator;
    int denominator;
};

Fraction::Fraction(int num, int den) {
    numerator = num;
    denominator = den;
     reduce();
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
    return (double)numerator / denominator;
}

bool Fraction::isGreaterThan(Fraction that) {
    return (numerator * that.denominator) > (that.numerator * denominator);
}

bool Fraction::isLessThan(Fraction that) {
    return (numerator * that.denominator) < (that.numerator * denominator);
}

bool Fraction::isEqual(Fraction that) {
    return (numerator * that.denominator) == (that.numerator * denominator);
}
void Fraction::reduce() {
    int g = gcd(abs(numerator), abs(denominator));
    numerator /= g;
    denominator /= g;
    if (denominator < 0) { // знак всегда у числителя
        numerator = -numerator;
        denominator = -denominator;
    }
}

int Fraction::gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
     int num1, den1, num2, den2;
    string input1, input2;

    // Read input
    getline(cin, input1);
    getline(cin, input2);
    
    // Parsing the fractions from the input strings
    stringstream ss1(input1);
    stringstream ss2(input2);
    char slash;

    ss1 >> num1 >> slash >> den1;
    ss2 >> num2 >> slash >> den2;

    Fraction f1(num1, den1);
    Fraction f2(num2, den2);

    // Output comparisons
    if (f1.isGreaterThan(f2)) {
        cout << f1.toString() << " > " << f2.toString() << endl;
    } else if (f1.isLessThan(f2)) {
        cout << f1.toString() << " < " << f2.toString() << endl;
    } else if (f1.isEqual(f2)) {
        cout << f1.toString() << " = " << f2.toString() << endl;
    }

    return 0;
}