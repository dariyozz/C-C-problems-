#include<iostream>

using namespace std;

int main() {
    int n, m, matrix1[100][100], matrix2[100][100], sameCols = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix1[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix2[i][j];
        }
    }
    for (int j = 0; j < m; ++j) {
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            for (int k = 0; k < n; ++k) {
                if (matrix1[k][j] != matrix2[k][i]) {
                    cnt = 0;
                    break;
                } else {
                    cnt++;
                }
            }
            if (cnt == n) {
                sameCols++;
            }
        }
    }
    cout << sameCols;
    return 0;
}