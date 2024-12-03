#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    cout << "Task 1";
    const int m = 12;
    int arr[m];

    srand(time(0)); // ?н?ц?ал?зац?я генератора випадкових чисел
    // Генерац?я масиву
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 100 - 50; // Випадков? числа в?д -50 до 49
    }

    cout << "Початковий масив: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Сортування за зростанням
    sort(arr, arr + m);
    cout << "Масив за зростанням: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Сортування за спаданням
    sort(arr, arr + m, greater<int>());
    cout << "Масив за спаданням: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    srand(time(0));
    // Генерац?я масиву
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 100 - 50;
    }

    cout << "Початковий масив: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Пошук першого максимального елемента
    int maxElement = arr[0];
    int maxIndex = 0;
    for (int i = 0; i < m; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    // Зам?нюємо в?д'ємн? числа на 0
    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Зм?нений масив: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
