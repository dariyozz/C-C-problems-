#include<iostream>

using namespace std;

int main() {
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 2; ++i) {
        int cnt = 0;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[i]) {
                cnt++;
            }
        }
        if (cnt >= 2) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}