#include <iostream>

int main() {
    int N;
    std::cout << "����?�� ����ࠫ쭥 �᫮ N: ";
    std::cin >> N;
    if (N <= 0) {
        std::cout << "�������: �᫮ N ��� ��� ����ࠫ쭨�!" << std::endl;
        return 1;
    }
    int product = 1; // ����⮪ ���, �? �� ���?������ 7
    bool hasDigitNotSeven = false; // ��ॢ?ઠ, � � ���, �?��?��? �?� 7
    while (N > 0) {
        int digit = N % 10; // ��ਬ�� ��⠭�� ����
        if (digit != 7) {
            product *= digit;
            hasDigitNotSeven = true;
        }
        N /= 10; // ������� ��⠭�� ����
    }
    if (hasDigitNotSeven) {
        std::cout << "����⮪ ��?� ���, �? �� ���?������ 7: " << product << std::endl;
    } else {
        std::cout << "� ��? ��? ��� ���?������ 7, ����⮪ �� ����������." << std::endl;
    }
    return 0;
}
