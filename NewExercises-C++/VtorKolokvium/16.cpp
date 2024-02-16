#include<iostream>

using namespace std;

int sum_pos(int *arr, int n, int ind) {
    int sum = 0;
    if (ind > n) return 0;
    for (int i = ind; i < n; ++i) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    if (n > 100) return 0;
    int ind, arr[100];
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);
    }
    cin >> ind;
    cout << sum_pos(arr, n, ind);

    return 0;
}
