#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    cout << "Task 1";
    long long c0;
    int steps = 0;

    // ����� ����� � ���짮��⥫�
    cout << "������ ������⥫쭮� 楫�� �᫮: ";
    cin >> c0;

    // �஢�ઠ �� ���४⭮��� �����
    if (c0 <= 0) {
        cout << "�訡��: �㦭� ����� ������⥫쭮� 楫�� �᫮!" << endl;
        return 1;
    }

    // �뢮� ��᫥����⥫쭮�� � �믮������ �����⬠
    cout << "��᫥����⥫쭮���: ";
    while (c0 != 1) {
        cout << c0 << " "; // �뢮� ⥪�饣� ���祭��
        if (c0 % 2 == 0) {
            c0 /= 2; // �᫨ ��⭮�, ����� �� 2
        } else {
            c0 = 3 * c0 + 1; // �᫨ ����⭮�, 㬭����� �� 3 � �ਡ���塞 1
        }
        steps++; // �����稢��� ����稪 蠣��
    }

    // �뢮� ��᫥����� ���祭�� (1) � �⮣��
    cout << c0 << endl;
    cout << "������⢮ 蠣��: " << steps << endl;
    cout << "Task 2";

    double pi4 = 0.0; // ��६����� ��� �࠭���� �㬬� (�⢥��� �᫠ ?)
    long n;           // ������⢮ ���権

    // ����� � ���짮��⥫� ������⢠ ���権
    cout << "Number of iterations? ";
    cin >> n;

    // �᭮���� 横� ��� ���᫥��� �㬬�
    for (long i = 0; i < n; i++) {
        // ���㫠: ������塞 ��� ���⠥� ��।��� �஡��� ᫠������
        if (i % 2 == 0) {
            pi4 += 1.0 / (2 * i + 1); // �᫨ ����� ��⭠�, �ਡ���塞
        } else {
            pi4 -= 1.0 / (2 * i + 1); // �᫨ ����� ����⭠�, ���⠥�
        }
    }

    // �뢮� १���� � ��᮪�� �筮����
    cout << fixed << setprecision(20); // ��⠭�������� 20 ������ ��᫥ ����⮩
    cout << "Pi = " << pi4 * 4.0 << endl;

    cout << "Task 3";

    // ����� � �����㢠�
    cout << "����?�� ஧�?� ��஭� ������ (�?��� 1): ";
    cin >> n;

    // ��ॢ?ઠ ��४⭮��? ��������
    if (n <= 1) {
        cout << "�������: �᫮ ��� ��� �?��� 1!" << endl;
        return 1; // �����襭�� �ணࠬ� � ������� �������
    }

    if (n > 20) {
        cout << "�������: �᫮ ��������! ����?�� ���祭�� �� 20." << endl;
        return 1;
    }

    // ������ ������ ���? ������
    cout << '+';
    for (int i = 0; i < n; i++) {
        cout << '-';
    }
    cout << '+' << endl;

    // ������ ���?� ������
    for (int i = 0; i < n; i++) {
        cout << '|';
        for (int j = 0; j < n; j++) {
            cout << ' ';
        }
        cout << '|' << endl;
    }

    // ������ ������ ���? ������
    cout << '+';
    for (int i = 0; i < n; i++) {
        cout << '-';
    }
    cout << '+' << endl;
    return 0;
}
