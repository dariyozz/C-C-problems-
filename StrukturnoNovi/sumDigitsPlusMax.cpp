#include<iostream>

using namespace std;

int getMaxDigit(int n) {
    int max = 0;
    if (n < 10) return n;
    while (n != 0) {
        if (max < n % 10) {
            max = n % 10;
        }
        n /= 10;
    }
    return max;
}

int sumDigitsNum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    int arr[100], i = 0;

    while (cin >> n) {
        arr[i++] = n;
    }

    int flag = 1;
    for (int j = 0; j < i; ++j) {
        if (flag) {
            cout << arr[j] << ": " << sumDigitsNum(arr[j]) << endl;
            flag = 0;
        } else {
            cout << arr[j] << ": " << sumDigitsNum(arr[j]) + getMaxDigit(arr[j - 1]) << endl;
        }
    }
    return 0;
}