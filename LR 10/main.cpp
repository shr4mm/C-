#include <iostream>
#include <vector>
#include <limits>

using namespace std;
// �㭪�?� ��� �⢮७�� ������?୮�� ��ᨢ� � ���������� ���� ����������� �᫠��
vector<vector<int>> createMatrix(int m, int n) {
    vector<vector<int>> matrix(m, vector<int>(n));
    srand(time(0)); // ��� ������?� ���������� �ᥫ
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100; // ��������? �᫠ �?� 0 �� 99
        }
    }
    return matrix;
}

// �㭪�?� ��� ��������� �����?
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
     // �������� 1: �?��?��� ��୨� �ᥫ � ������� �浪�
    cout << "Task 1: �?��?��� ��୨� �ᥫ � ������� �浪�" << endl;
    int m1 = 4, n1 = 3;
    auto matrix1 = createMatrix(m1, n1);
    printMatrix(matrix1);
    for (int i = 0; i < m1; i++) {
        int evenCount = 0;
        for (int j = 0; j < n1; j++) {
            if (matrix1[i][j] % 2 == 0) evenCount++;
        }
        cout << "�冷� " << i + 1 << ": " << evenCount << " ��୨� �ᥫ" << endl;
    }
    cout << endl;

    // �������� 2: �?��?��� ��୨� �ᥫ � ������� �⮢�稪�
    cout << "Task 2: �?��?��� ��୨� �ᥫ � ������� �⮢�稪�" << endl;
    int m2 = 6, n2 = 4;
    auto matrix2 = createMatrix(m2, n2);
    printMatrix(matrix2);
    for (int j = 0; j < n2; j++) {
        int evenCount = 0;
        for (int i = 0; i < m2; i++) {
            if (matrix2[i][j] % 2 == 0) evenCount++;
        }
        cout << "�⮢�稪 " << j + 1 << ": " << evenCount << " ��୨� �ᥫ" << endl;
    }
    cout << endl;

    // �������� 3: �㬠 �������?� ������� �浪�
    cout << "Task 3: �㬠 �������?� ������� �浪�" << endl;
    int m3 = 5, n3 = 7;
    auto matrix3 = createMatrix(m3, n3);
    printMatrix(matrix3);
    for (int i = 0; i < m3; i++) {
        int rowSum = 0;
        for (int j = 0; j < n3; j++) {
            rowSum += matrix3[i][j];
        }
        cout << "�冷� " << i + 1 << ": �㬠 = " << rowSum << endl;
    }
    cout << endl;

    // �������� 4: �㬠 �������?� ������� �⮢�稪�
    cout << "Task 4: �㬠 �������?� ������� �⮢�稪�" << endl;
    int m4 = 4, n4 = 6;
    auto matrix4 = createMatrix(m4, n4);
    printMatrix(matrix4);
    for (int j = 0; j < n4; j++) {
        int columnSum = 0;
        for (int i = 0; i < m4; i++) {
            columnSum += matrix4[i][j];
        }
        cout << "�⮢�稪 " << j + 1 << ": �㬠 = " << columnSum << endl;
    }
    cout << endl;

    // �������� 5: ���ᨬ��쭨� ������� � ���� ?�����
    cout << "Task 5: ���ᨬ��쭨� ������� � ���� ?�����" << endl;
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
    cout << "���ᨬ��쭨� �������: " << maxVal << ", �冷�: " << maxRow + 1 << ", �⮢�稪: " << maxCol + 1 << endl;
    cout << endl;

    // �������� 6: �?�?���쭨� ������� � ���� ?�����
    cout << "Task 6: �?�?���쭨� ������� � ���� ?�����" << endl;
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
    cout << "�?�?���쭨� �������: " << minVal << ", �冷�: " << minRow + 1 << ", �⮢�稪: " << minCol + 1 << endl;
    // �������� 7: ���ᨬ��쭨� ������� � ������� �⮢�稪�
    cout << "Task 7: ���ᨬ��쭨� ������� � ������� �⮢�稪�" << endl;
    int m7 = 7, n7 = 4;
    auto matrix7 = createMatrix(m7, n7);
    printMatrix(matrix7);
    for (int j = 0; j < n7; j++) {
        int columnMax = numeric_limits<int>::min();
        for (int i = 0; i < m7; i++) {
            columnMax = max(columnMax, matrix7[i][j]);
        }
        cout << "�⮢�稪 " << j + 1 << ": ���ᨬ��쭨� ������� = " << columnMax << endl;
    }

    return 0;
}
