#include<iostream>

using namespace std;

int main() {
    int n, m, c1, c2, matrix[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
//    00 01  02 03
//
//    10 11  -12 13
//    20 21  22 23
    cin >> c1 >> c2;
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i < c1 && j < c2) {
                sum1 += matrix[i][j];
            } else if (i < c1 && j >= c2) {
                sum2 += matrix[i][j];
            } else if (i >= c1 && j < c2) {
                sum3 += matrix[i][j];
            } else {
                sum4 += matrix[i][j];
            }
        }
    }
    cout << sum2 << " " << sum1 << " " << sum3 << " " << sum4;
    return 0;
}