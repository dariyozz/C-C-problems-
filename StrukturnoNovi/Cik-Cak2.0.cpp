#include<iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n < 10) continue;
        int broj = n, sekv;
        if (broj % 10 < 5 && broj / 10 % 10 >= 5) sekv = 1;
        else if (broj % 10 >= 5 && broj / 10 % 10 < 5) sekv = 0;
        else continue;

        while (broj > 0) {
            broj /= 10;
            if (broj < 10) {
                cout << n << endl;
                break;
            }
            int a = broj % 10, b = broj / 10 % 10;
            if (sekv && (a < 5 && b >= 5)) break;
            else if (!sekv && (a >= 5 && b < 5)) break;

            sekv = !sekv;
        }
    }
    return 0;
}