#include<iostream>

using namespace std;

int main() {
    int n, k, arr[100];
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    cout << k<<"-te najmali elementi se: ";
    for (int i = 0; i < k; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}

