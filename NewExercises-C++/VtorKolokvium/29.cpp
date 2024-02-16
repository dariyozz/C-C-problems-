#include <iostream>
#include<cstring>

using namespace std;

int main() {
    int n, found = 0, x1, y1, x2, y2;
    char matrix[100][100], word[11];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    cin >> word;
    for (int i = 0; i < n && !found; i++) {
        for (int j = 0; j < n && !found; ++j) {
            int k;
            if (matrix[i][j] == word[0]) {
                //check left to right
                for (k = 1; k < strlen(word); ++k) {
                    if (matrix[i][j + k] != word[k]) break;
                }
                if (k == strlen(word)) {
                    found = 1;
                    x1 = i;
                    y1 = j;
                    x2 = i;
                    y2 = j + k - 1;
                    break;
                };
                //check right to left
                for (k = 1; k < strlen(word); ++k) {
                    if (matrix[i][j - k] != word[k]) break;
                }
                if (k == strlen(word)) {
                    found = 1;
                    x1 = i;
                    y1 = j;
                    x2 = i;
                    y2 = j - k + 1;
                    break;
                };
                //check top to bottom
                for (k = 1; k < strlen(word); ++k) {
                    if (matrix[i + k][j] != word[k]) break;
                }
                if(k == strlen(word)) {
                    found = 1;
                    x1 = i;
                    y1 = j;
                    x2 = i + k - 1;
                    y2 = j;
                    break;
                };
                //check bottom to top
                for (k = 1; k < strlen(word); ++k) {
                    if (matrix[i - k][j] != word[k]) break;
                }
                if(k == strlen(word)) {
                    found = 1;
                    x1 = i;
                    y1 = j;
                    x2 = i - k + 1;
                    y2 = j;
                    break;
                };
            }
        }
    }
    if (found) {
        cout << x1 << ", " << y1 << " -> " << x2 << ", " << y2;
    } else {
        cout << "Not Found";
    }
    return 0;
}
