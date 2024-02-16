#include <iostream>

using namespace std;

double blur(float matrix[100][100], int x, int y, int m, int n) {
    double s = 0;
    int neighbours = 0;
    for (int i = x - 1; i <= x + 1; ++i) {
        for (int j = y - 1; j < y + 1; ++j) {
            if (i >= 0 && i < n && j >= 0 && j < m) {
                s += matrix[i][j];
                neighbours++;
            }
        }
    }
    return s / neighbours;
}

int main() {
    int n, m, a1, b1, a2, b2;
    float matrix1[100][100], matrix2[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix1[i][j];
            matrix2[i][j] = matrix1[i][j];
        }
    }
    cin >> a1 >> b1 >> a2 >> b2;
    for (int i = a1; i <= a2; ++i) {
        for (int j = b1; j <= b2; ++j) {
            matrix2[i][j] = blur(matrix1, i, j, m, n);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}