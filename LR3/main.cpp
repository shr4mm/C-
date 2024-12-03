#include <iostream>

int main() {
    std::cout << "Task 1\n";
    int N;
    std::cout << ": ";
    std::cin >> N;
    if (N < 100 || N > 999) {
        std::cout << "error." << std::endl;
        return 1;
    }
    int hundreds = N / 100;
    int tens = (N / 10) % 10;
    int units = N % 10;
    int count = 0;
    if (hundreds < 7) count++;
    if (tens < 7) count++;
    if (units < 7) count++;
    //�?��?��� ��� ����� �� 7
    std::cout << ": " << count << std::endl;
    ////////////////////////////////////////////////
    std::cout << "Task 2 \n";
    int studentNumber;
    std::cout << "����?�� ����� ��㤥�� (1-5): ";
    std::cin >> studentNumber;
    switch (studentNumber) {
        case 1:
            std::cout << "?�'�: ����ᠭ��\n";
        std::cout << "��।�?� ���: 4.5\n";
        break;
        case 2:
            std::cout << "?�'�: ���?�\n";
        std::cout << "��।�?� ���: 4.7\n";
        break;
        case 3:
            std::cout << "?�'�: ?���\n";
        std::cout << "��।�?� ���: 3.9\n";
        break;
        case 4:
            std::cout << "?�'�: ��⠫?�\n";
        std::cout << "��।�?� ���: 4.2\n";
        break;
        case 5:
            std::cout << "?�'�: ����\n";
        std::cout << "��।�?� ���: 4.8\n";
        break;
        default:
            std::cout << "��㤥�� � ⠪�� ����஬ �� ��������.\n";
        break;
    }
    return 0;
}
