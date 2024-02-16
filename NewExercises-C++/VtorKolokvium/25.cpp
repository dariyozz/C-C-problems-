#include<iostream>
#include<cstring>

using namespace std;

//00 01 02 03
//10 11 12 13
//20 21 22 23
//30 31 32 33
int main() {
    int m, n, r, k, matrix[100][100], min = -1;
    cin >> m >> n >> r >> k;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
            if (min == -1 || matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i < r && j < k) {
                matrix[i][j] = min;
                cout << matrix[i][j] << " ";
            } else {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}