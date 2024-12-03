#include <iostream>
#include <cmath>
int main() {
    std::cout << "Task 1 ";
    double x, y;
    std::cout << "x: ";
    std::cin >> x;
    if (x <= 1) {
        y = 0.5 * cos(x) + 4 * x;
    } else if (x < 0) {
        y = 0.25 * pow(x, 4) + 2 * pow(x, 2);
    } else if (x > 1) {
        y = 0.9 * sqrt(x) - 0.8 * x;
    }
    std::cout << "Y: " << y << std::endl;
    /////////////////////////////////////////////////
    std::cout << "Task 2";
    std::cout << "(x, y): ";
    std::cin >> x >> y;
    bool inTriangle = (x >= 0 && x <= 1 && y >= 0 && y <= 1 && y <= 1 - x);
    bool inSemiCircle = (x * x + y * y <= 1 && x <= 0 && y <= 0);
    if (inTriangle || inSemiCircle) {
        std::cout << "В заштрихованій області" << std::endl;
    } else {
        std::cout << "Не в заштрихованій області" << std::endl;
    }
    return 0;
}
