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

    cout << "Початковий масив: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Пошук м?н?мального та максимального елемент?в
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < m; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Зам?на м?сцями
    swap(arr[minIndex], arr[maxIndex]);

    cout << "Масив п?сля зам?ни: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Task 2" << endl;

    srand(time(0));
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 100 - 50;
    }

    cout << "Початковий масив: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Введ?ть число A: ";
    cin >> A;

    // П?драхунок к?лькост? елемент?в б?льших за A
    int count = 0;
    for (int i = 0; i < m; i++) {
        if (arr[i] > A) {
            count++;
        }
    }

    cout << "К?льк?сть елемент?в б?льше за " << A << ": " << count << endl;


    cout << "Task 3" << endl;

    srand(time(0));
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 100 - 50;
    }

    cout << "Початковий масив: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Пошук першого нульового елемента
    int zeroIndex = -1;
    for (int i = 0; i < m; i++) {
        if (arr[i] == 0) {
            zeroIndex = i;
            break;
        }
    }

    if (zeroIndex != -1) {
        cout << "Номер першого нульового елемента: " << zeroIndex << endl;
    } else {
        cout << "Масив не м?стить нульових елемент?в." << endl;
    }

    return 0;
}
