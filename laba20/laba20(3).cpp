#include <iostream>
#include <string>
using namespace std;
class AdHocSquare
{
public:
 AdHocSquare(double side);
 void set_side(double side);
 double get_area();
private:
 double side;
};
AdHocSquare::AdHocSquare(double side) {
    set_side(side);
}
void AdHocSquare::set_side(double side) {
   if (side >= 0) {
        this->side = side;
    } else {
        cout << "ERROR side<0" << endl;
    }
}
double AdHocSquare::get_area() {
    return side * side;
}
class LazySquare
{
public:
 LazySquare(double side);
 void set_side(double side);
 double get_area();
private:
 double side;
 double area;
 bool side_changed;
};
LazySquare::LazySquare(double side) {
    this->side_changed=false;
    set_side(side);
    
}
void LazySquare::set_side(double side) {
   if (side >= 0) {
        this->side = side;
        this->side_changed=true;
    } else {
        cout << "ERROR side<0" << endl;
    }
}
double LazySquare::get_area() {
    if (side_changed) {
        area = side * side;
        side_changed = false;
    }
    return area;
}
int main()
{
    cout << "AdHocSquare" << endl;
    AdHocSquare ad(4);
    cout << "Area: " << ad.get_area() << endl;
    ad.set_side(2.0);
    cout << "Area: " << ad.get_area() << endl;
      cout << "LazySquare " << endl;
      
    LazySquare lazy(5);
    cout << "Area: " << lazy.get_area() << endl;
    lazy.set_side(3);
    cout << "Area: " << lazy.get_area() << endl;
}