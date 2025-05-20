#include <iostream>
#include <ctime>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false; 
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}
int main() {
    int num;
    cout << "Введіть число: ";
    cin >> num;
    if (isPrime(num)) {
        cout << num << " є простим числом." << endl;
    } else {
        cout << num << " не є простим числом." << endl;
    }

    return 0;
}