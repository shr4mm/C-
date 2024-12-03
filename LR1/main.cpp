#include <iostream>
#include <math.h>
bool semicircle(double x, double y) {
    return (x * x + y * y <= 1 && y <= 0 && x <= 0);
}
bool triangle(double x, double y) {
    return (x * x + y * y <= 1 && y <= 0 && x <= 0);
}
int main() {
    int x;
    double y;
    std::cin >> x;
    if(x <= 1 && x >= 0) {
        y = 0.5 * cos(x) + 4 * x;
    }else if(x < 0) {
        y = 0.25 * pow(x, 4) + 2 * pow(x, 2);
    }else if (x > 1) {
        y = 0.9 * sqrt(x) - 0.8 * x;
    }
    std::cout << y << std::endl;
    ///////////////////////////////////////////////////////////////////////////////////
    std::cout << "task 2";
    double q, e;
    std::cout << "(x, y): ";
    std::cin >> q >> e;
    if (semicircle(q, e)) {
        std::cout << "semicircle" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    return 0;
}
