#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char c[128];
    int s = 0;

    while (true) {
        cin >> c;
        int broj = 0;
        for (int i = 0; i < strlen(c); i++) {
            int val = (int) (c[i] - '0');

            if (val >= 0 && val <= 9) {
                broj = (broj * 10) + val;
            } else if ((val < 0 || val > 9) && broj > 0) {
                s += broj;
                broj = 0;
            }
        }

        s += broj;
        broj = 0;

        if (c[strlen(c) - 1] == '!') { break; }
    }

    cout<<s;

    return 0;
}