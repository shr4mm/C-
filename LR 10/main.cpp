#include <iostream>
#include <vector>
#include <limits>

using namespace std;
// Функц?я для створення двовим?рного масиву та заповнення його випадковими числами
vector<vector<int>> createMatrix(int m, int n) {
    vector<vector<int>> matrix(m, vector<int>(n));
    srand(time(0)); // Для генерац?ї випадкових чисел
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100; // Випадков? числа в?д 0 до 99
        }
    }
    return matrix;
}

// Функц?я для виведення матриц?
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
     // Завдання 1: К?льк?сть парних чисел у кожному рядку
    cout << "Task 1: К?льк?сть парних чисел у кожному рядку" << endl;
    int m1 = 4, n1 = 3;
    auto matrix1 = createMatrix(m1, n1);
    printMatrix(matrix1);
    for (int i = 0; i < m1; i++) {
        int evenCount = 0;
        for (int j = 0; j < n1; j++) {
            if (matrix1[i][j] % 2 == 0) evenCount++;
        }
        cout << "Рядок " << i + 1 << ": " << evenCount << " парних чисел" << endl;
    }
    cout << endl;

    // Завдання 2: К?льк?сть парних чисел у кожному стовпчику
    cout << "Task 2: К?льк?сть парних чисел у кожному стовпчику" << endl;
    int m2 = 6, n2 = 4;
    auto matrix2 = createMatrix(m2, n2);
    printMatrix(matrix2);
    for (int j = 0; j < n2; j++) {
        int evenCount = 0;
        for (int i = 0; i < m2; i++) {
            if (matrix2[i][j] % 2 == 0) evenCount++;
        }
        cout << "Стовпчик " << j + 1 << ": " << evenCount << " парних чисел" << endl;
    }
    cout << endl;

    // Завдання 3: Сума елемент?в кожного рядка
    cout << "Task 3: Сума елемент?в кожного рядка" << endl;
    int m3 = 5, n3 = 7;
    auto matrix3 = createMatrix(m3, n3);
    printMatrix(matrix3);
    for (int i = 0; i < m3; i++) {
        int rowSum = 0;
        for (int j = 0; j < n3; j++) {
            rowSum += matrix3[i][j];
        }
        cout << "Рядок " << i + 1 << ": сума = " << rowSum << endl;
    }
    cout << endl;

    // Завдання 4: Сума елемент?в кожного стовпчика
    cout << "Task 4: Сума елемент?в кожного стовпчика" << endl;
    int m4 = 4, n4 = 6;
    auto matrix4 = createMatrix(m4, n4);
    printMatrix(matrix4);
    for (int j = 0; j < n4; j++) {
        int columnSum = 0;
        for (int i = 0; i < m4; i++) {
            columnSum += matrix4[i][j];
        }
        cout << "Стовпчик " << j + 1 << ": сума = " << columnSum << endl;
    }
    cout << endl;

    // Завдання 5: Максимальний елемент та його ?ндекс
    cout << "Task 5: Максимальний елемент та його ?ндекс" << endl;
    int m5 = 3, n5 = 4;
    auto matrix5 = createMatrix(m5, n5);
    printMatrix(matrix5);
    int maxVal = numeric_limits<int>::min();
    int maxRow = -1, maxCol = -1;
    for (int i = 0; i < m5; i++) {
        for (int j = 0; j < n5; j++) {
            if (matrix5[i][j] > maxVal) {
                maxVal = matrix5[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    cout << "Максимальний елемент: " << maxVal << ", Рядок: " << maxRow + 1 << ", Стовпчик: " << maxCol + 1 << endl;
    cout << endl;

    // Завдання 6: М?н?мальний елемент та його ?ндекс
    cout << "Task 6: М?н?мальний елемент та його ?ндекс" << endl;
    int m6 = 4, n6 = 7;
    auto matrix6 = createMatrix(m6, n6);
    printMatrix(matrix6);
    int minVal = numeric_limits<int>::max();
    int minRow = -1, minCol = -1;
    for (int i = 0; i < m6; i++) {
        for (int j = 0; j < n6; j++) {
            if (matrix6[i][j] < minVal) {
                minVal = matrix6[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    cout << "М?н?мальний елемент: " << minVal << ", Рядок: " << minRow + 1 << ", Стовпчик: " << minCol + 1 << endl;
    // Завдання 7: Максимальний елемент у кожному стовпчику
    cout << "Task 7: Максимальний елемент у кожному стовпчику" << endl;
    int m7 = 7, n7 = 4;
    auto matrix7 = createMatrix(m7, n7);
    printMatrix(matrix7);
    for (int j = 0; j < n7; j++) {
        int columnMax = numeric_limits<int>::min();
        for (int i = 0; i < m7; i++) {
            columnMax = max(columnMax, matrix7[i][j]);
        }
        cout << "Стовпчик " << j + 1 << ": максимальний елемент = " << columnMax << endl;
    }

    return 0;
}
