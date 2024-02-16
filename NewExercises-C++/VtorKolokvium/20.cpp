#include<iostream>
#include <cmath>

using namespace std;

int main() {
    int m, n, matrix[100][100], k = 0;
    double sum, average = 0;
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += matrix[i][j];
        }
        average = sum / n;
        int num = matrix[i][0];
//        1,2,3,4
//        5,6,7,8
//        9,8,7,6
//        5,4,3,2
        for (int j = 1; j < n; ++j) {
            if (abs(average - matrix[i][j]) > abs(average - num)) {
                num = matrix[i][j];
            }
        }
        cout << num << " ";
    }
    return 0;
}