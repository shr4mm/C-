#include <iostream>
#include <string>
using namespace std;
class Square
{
public:
Square(double side);
void setSide(double side);
double getSide() ;
double getArea() ;
void print();
private:
    double side;
    double area;
};
Square::Square(double side)
{
    setSide(side);
}
void Square::setSide(double side){
    if (side >= 0) {
        this->side = side;
        this->area = side * side;
    } else {
        cout << "ERROR side<0" << endl;
    }
}
double Square::getSide() {
    return side;
}

double Square::getArea() {
    return area;
}
void Squere::print()
{
cout << "Square: side=" << getSide() << " area=" << getArea() << endl;
}
int main()
{
Square s(4);
s.print();
s.setSide(2.0);
s.print();
s.setSide(-33.0);
s.print();
return 0;
}