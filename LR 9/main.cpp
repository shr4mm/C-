#include <iostream>
#include <ctime>
using namespace std;

int main() {
    cout << "Task 1" << endl;
    const int m = 12;
    int arr[m], A;

    srand(time(0));
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 100 - 50;
    }

    cout << "���⪮��� ��ᨢ: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ���� �?�?���쭮�� � ���ᨬ��쭮�� �������?�
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < m; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // ���?�� �?��ﬨ
    swap(arr[minIndex], arr[maxIndex]);

    cout << "��ᨢ �?�� ���?��: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Task 2" << endl;

    srand(time(0));
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 100 - 50;
    }

    cout << "���⪮��� ��ᨢ: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "����?�� �᫮ A: ";
    cin >> A;

    // �?���㭮� �?�쪮��? �������?� �?���� �� A
    int count = 0;
    for (int i = 0; i < m; i++) {
        if (arr[i] > A) {
            count++;
        }
    }

    cout << "�?��?��� �������?� �?��� �� " << A << ": " << count << endl;


    cout << "Task 3" << endl;

    srand(time(0));
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 100 - 50;
    }

    cout << "���⪮��� ��ᨢ: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ���� ���讣� ��쮢��� �������
    int zeroIndex = -1;
    for (int i = 0; i < m; i++) {
        if (arr[i] == 0) {
            zeroIndex = i;
            break;
        }
    }

    if (zeroIndex != -1) {
        cout << "����� ���讣� ��쮢��� �������: " << zeroIndex << endl;
    } else {
        cout << "��ᨢ �� �?���� ��쮢�� �������?�." << endl;
    }

    return 0;
}
