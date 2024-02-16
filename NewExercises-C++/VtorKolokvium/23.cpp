#include<iostream>
#include<cstring>
#include <cmath>

using namespace std;

int main() {
    int n, matrix[100][100], start = 1;
    cin >> n;
    int m = ceil(sqrt(n));
    for (int j = 0; j < m; ++j) {
        if (j % 2 == 0) {
            for (int i = 0; i < m; ++i) {
                if (start > n) {
                    matrix[i][j] = 0;
                } else {
                    matrix[i][j] = start++;
                }
            }
        } else {
            for (int i = m - 1; i >= 0; i--) {
                if (start > n) {
                    matrix[i][j] = 0;
                } else {
                    matrix[i][j] = start++;
                }
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}