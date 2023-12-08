#include<iostream>

using namespace std;

int getMaxDigit(int n) {
    int max = 0;
    while (n != 0) {
        if (n % 10 > max) {
            max = n % 10;
        }
        n /= 10;
    }
    return max;
}

int getPos(int num, int pos) {
    while (pos > 0) {
        num /= 10;
        pos--;
    }
    return num % 10;
}

int main() {
    int n, maxLength = 5, arr[100], i = 0;
    while (cin >> n) {
        if (n > 99999) continue;
        arr[i++] = n;
    }
    int arrPos[] = {0, 1, 2, 3, 4};
    int arrCnt[100];
    for (int j = 0; j < i; ++j) {
        int cnt = 0;
        for (int k = 0; k < i; ++k) {
            if (getPos(arr[k], arrPos[j]) == getMaxDigit(arr[k])) {
                cnt++;
            }
        }
        arrCnt[j] = cnt;
    }
    for (int j = 0; j < maxLength; ++j) {
        cout << arrPos[j] << ": " << arrCnt[j] << endl;
    }
    return 0;
}