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
    Fraction plus(Fraction that);
Fraction minus(Fraction that);
Fraction times(Fraction that);
Fraction by(Fraction that);
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
    return (double)(numerator) / denominator;
}
    Fraction Fraction::plus(Fraction that) {
        int num = numerator * that.denominator + that.numerator *denominator;
        int den = denominator * that.denominator;
        return Fraction(num, den);
    }
        Fraction Fraction::minus(Fraction that) {
        int num = numerator * that.denominator - that.numerator * denominator;
        int den = denominator * that.denominator;
        return Fraction(num, den);
    } 
    Fraction Fraction::times(Fraction that) {
        int num = numerator * that.numerator;
        int den = denominator * that.denominator;
        return Fraction(num, den);
    }
    Fraction Fraction::by(Fraction that) {
        int num = numerator * that.denominator;
        int den = denominator * that.numerator;
        return Fraction(num, den);
    }
void Fraction::reduce() {
    int g = gcd(abs(numerator), abs(denominator));
    numerator /= g;
    denominator /= g;
    if (denominator < 0) {
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
    int num1, den1,num2, den2;
    string input1, input2;
    getline(cin, input1);
    getline(cin, input2);
    stringstream ss1(input1);
    stringstream ss2(input2);
    char slash;
    ss1 >> num1 >> slash >> den1;
    ss2 >> num2 >> slash >> den2;

    Fraction f1(num1, den1);
    Fraction f2(num2, den2);
     cout << f1.toString() << " + " << f2.toString() << " = " << f1.plus(f2).toString() << endl;
    cout << f1.toString() << " - " << f2.toString() << " = " << f1.minus(f2).toString() << endl;
    cout << f1.toString() << " * " << f2.toString() << " = " << f1.times(f2).toString() << endl;
    cout << f1.toString() << " / " << f2.toString() << " = " << f1.by(f2).toString() << endl;

    return 0;
}