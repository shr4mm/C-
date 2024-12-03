#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    //#1
    /*�� ����� �ணࠬ�:
�����㢠� ������� �᫮
value
value.
�ணࠬ� ��ॢ?��� ���� �� �?����?��?��� ���?� ?� ����� 㬮�, ������⮢��� ���?�? ������:
&& (?),
|| (���).
��� �� � ���� 㬮�� �����������,
��?��� answer ��� true, ? ���������� ���?�������� "�� ������ :)". ?���� ���������� "�� �� ������ :(".
*/
    bool answer; // ��?��� ��� ���०���� १�����
    int value;   // ������� �᫮

    std::cout << "����?�� �᫮: ";
    std::cin >> value;

    // ���㫠 ��� ��ॢ?ન 㬮�
    answer = (value >= 0 && value < 10) ||
             (value * 2 < 20 && value - 2 > -2) ||
             (value - 1 > 1 && value / 2 < 10) ||
             (value == 111);

    // ��������� १�����
    std::cout << (answer ? "�� ������ :)" : "�� �� ������ :(") << std::endl;
    //�2
    // �����襭�� �'�� ��?���� ⨯� float
    float num1, num2, num3, num4, num5;

    // �������� ���祭�
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // ���?� �ᥫ � ����?����� �ଠ�?
    cout << num1 << endl;                            // ������ � �
    cout << fixed << setprecision(2) << num2 << endl; // ������ � 2 ������� �?�� ����
    cout << setprecision(6) << num3 << endl;         // ������ � ���ᨬ��쭮� ��?���
    cout << setprecision(2) << num4 << endl;         // ������ ���㣫��� �� 2 ����?�
    cout << setprecision(0) << num5 << endl;         // ������ ���㣫��� �� �?���� �᫠
    //�3
    /*��������:
    ������ � �����㢠� ��� �?�? �᫠.
    ����?��� 1 �� ����� � �ᥫ (���⢮ਢ� �� � �᫠ ⨯� float ��। �?�����).
    ��ॢ?��, � �?����� १����?� �� ��ॢ���� 0.000001 (epsilon).
    ������ १���� ���?��ﭭ�.*/
    const float epsilon = 0.000001; // �����⨬� ��娡�� (epsilon)

    // �������� ���� �?��� �ᥫ
    cout << "����?�� ���� �᫮: ";
    cin >> num1;
    cout << "����?�� ��㣥 �᫮: ";
    cin >> num2;

    // ���⢮७�� �� float � ���᫥���
    float result1 = 1.0f / num1;
    float result2 = 1.0f / num2;

    // ���?��ﭭ� � ������⠭�� epsilon
    if (fabs(result1 - result2) < epsilon) {
        cout << "������� �?��? (� ��?��� �� 0.000001 epsilon)" << endl;
    } else {
        cout << "������� �� �?��? (� ��?��� �� 0.000001 epsilon)" << endl;
    }
    //�4
    /*���, 直� ��ਬ�� ��� �᫠ �?� �����㢠�, ��ॢ?���,
     *� ���室����� ���� � ����� �?� 1 �� 255, ? ��'��� �� � �����? IP-����:*/
    cout << "����?�� ���� �᫮: ";
    cin >> num1;
    cout << "����?�� ��㣥 �᫮: ";
    cin >> num2;
    cout << "����?�� ���� �᫮: ";
    cin >> num3;
    cout << "����?�� �⢥�� �᫮: ";
    cin >> num4;

    // ��ॢ?ઠ, � ��? �᫠ ���室����� � �?������? �?� 1 �� 255
    if ((num1 >= 1 && num1 <= 255) &&
        (num2 >= 1 && num2 <= 255) &&
        (num3 >= 1 && num3 <= 255) &&
        (num4 >= 1 && num4 <= 255)) {
        // ���㢠��� � ���?� IP-����
        cout << num1 << "." << num2 << "." << num3 << "." << num4 << endl;
        } else {
            // �������, �� �� � ���� �᫮ �� � �?������?
            cout << "�������: ��? �᫠ ������? ��� � ����� �?� 1 �� 255!" << endl;
        }

    return 0;
}