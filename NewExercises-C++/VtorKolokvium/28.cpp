#include<iostream>

using namespace std;

void premesti(int arr[], int n) {
    int temp, i, cnt = 0;
    for (i = 0; i < n; ++i) {
        if (cnt == n) break;
        if (arr[i] < 0) {
            temp = arr[i];
            for (int j = i; j < n - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            arr[n - 1] = temp;
            i--;
        }
        cnt++;
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    premesti(arr, n);
    return 0;
}