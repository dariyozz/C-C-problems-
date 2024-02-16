#include<iostream>

using namespace std;

void transformArray(int *arr, int n) {
    if (arr[0] > 0) {
        int j = 0;
        int firstPositive = arr[0];
        if (firstPositive > n) {
            for (int i = 0; i < n; ++i) {
                arr[i] = 0;
            }
        } else {
            while (firstPositive != 0) {
                for (int i = n - 1; i > 0; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[j++] = 0;
                firstPositive--;
            }
        }
    } else {
        int firstNegative = abs(arr[0]);
        if (firstNegative > n) {
            for (int i = 0; i < n; ++i) {
                arr[i] = 0;
            }
        } else {
            int j = n - 1;
            while (firstNegative != 0) {
                for (int i = 0; i < n - 1; ++i) {
                    arr[i] = arr[i + 1];
                }
                arr[j--] = 0;
                firstNegative--;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int checkAllZeros(int *arr, int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) return 0;
    }
    return 1;
}

int main() {
    int m, n, arr[100], cnt = 0;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> n;
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
        transformArray(arr, n);
        if (checkAllZeros(arr, n)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}