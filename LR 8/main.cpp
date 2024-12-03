#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    cout << "Task 1";
    const int m = 12;
    int arr[m];

    srand(time(0)); // ?�?�?��?���?� ������� ���������� �ᥫ
    // ������?� ��ᨢ�
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 100 - 50; // ��������? �᫠ �?� -50 �� 49
    }

    cout << "���⪮��� ��ᨢ: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ����㢠��� �� ���⠭��
    sort(arr, arr + m);
    cout << "��ᨢ �� ���⠭��: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ����㢠��� �� ᯠ�����
    sort(arr, arr + m, greater<int>());
    cout << "��ᨢ �� ᯠ�����: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    srand(time(0));
    // ������?� ��ᨢ�
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 100 - 50;
    }

    cout << "���⪮��� ��ᨢ: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ���� ���讣� ���ᨬ��쭮�� �������
    int maxElement = arr[0];
    int maxIndex = 0;
    for (int i = 0; i < m; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    // ���?��� �?�'�? �᫠ �� 0
    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "��?����� ��ᨢ: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
