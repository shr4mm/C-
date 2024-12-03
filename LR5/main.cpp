#include <iostream>
#include <cmath>
#include <iomanip>
//LR5


int main() {
    //#1
    double x, y;

    std::cout << "Введ?ть 5 значень x:\n";

    for (int i = 0; i < 5; i++) {
        std::cout << "x[" << i + 1 << "] = ";
        std::cin >> x;
        y = pow(sin(x), 5) + fabs(5 * x - 1.5);
        std::cout << "y[" << i + 1 << "] = " << y << std::endl;
    }
       //#2
    double num = 1;
    for (int i = 3; i <= 100; i += 3) {
        num *= i;
    }
    std::cout << "Добуток чисел, кратних 3 ? не б?льших за 100: " << num << std::endl;
    //#3
    double a, b, h;
    std::cout << "Введ?ть початкове значення a: ";
    std::cin >> a;
    std::cout << "Введ?ть к?нцеве значення b: ";
    std::cin >> b;
    std::cout << "Введ?ть крок h: ";
    std::cin >> h;
    if (h <= 0 || a > b) {
        std::cout << "Помилка: некоректн? значення a, b або h!" << std::endl;
        return 1;
    }
    std::cout << "--------------------" << std::endl;
    std::cout << std::setw(10) << "X" << std::setw(10) << "Y" << std::endl;
    std::cout << "--------------------" << std::endl;
    x = a;
    while (x <= b) {
        if (x > 0) {
            std::cout << std::setw(10) << x << std::setw(10) << "Немає ОДЗ" << std::endl;
        } else {
            double y = sin(x) + sqrt(-x);
            std::cout << std::setw(10) << x << std::setw(10) << y << std::endl;
        }
        x += h;
    }
    std::cout << "--------------------" << std::endl;
    return 0;
}
