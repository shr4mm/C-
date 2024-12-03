#include <iostream>

int main() {
    int N;
    std::cout << "Введ?ть натуральне число N: ";
    std::cin >> N;
    if (N <= 0) {
        std::cout << "Помилка: число N має бути натуральним!" << std::endl;
        return 1;
    }
    int product = 1; // Добуток цифр, як? не дор?внюють 7
    bool hasDigitNotSeven = false; // Перев?рка, чи є цифри, в?дм?нн? в?д 7
    while (N > 0) {
        int digit = N % 10; // Отримуємо останню цифру
        if (digit != 7) {
            product *= digit;
            hasDigitNotSeven = true;
        }
        N /= 10; // Видаляємо останню цифру
    }
    if (hasDigitNotSeven) {
        std::cout << "Добуток ус?х цифр, як? не дор?внюють 7: " << product << std::endl;
    } else {
        std::cout << "У числ? вс? цифри дор?внюють 7, добуток не обчислюється." << std::endl;
    }
    return 0;
}
