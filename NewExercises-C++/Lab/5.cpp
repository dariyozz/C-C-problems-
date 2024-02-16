#include<iostream>

using namespace std;

int main() {
    int n, matrix[100][100];
    cin >> n;
    if (n % 2 != 0) {
        cout << "GRESKA";
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] += matrix[n - i - 1][j];
        }
        for (int j = 0; j < n / 2; ++j) {
            matrix[i][j] += matrix[i][n - j - 1];
        }
    }

    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}