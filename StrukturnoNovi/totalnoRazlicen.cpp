#include<iostream>

using namespace std;

int checkHasNumber(int n, int x) {
    while (n != 0) {
        int lastDigit = n % 10;
        if (lastDigit == x) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    int n, x, smallest, flag = 0;
    cin >> n >> x;
    for (int i = n - 1; i >= 0; --i) {
        if (checkHasNumber(i, x)) {
            smallest = i;
            flag = 1;
            break;
        }
    }
    if (flag) {
        cout << smallest;
    }
    return 0;
}