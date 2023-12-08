#include <iostream>

using namespace std;

int main() {
    int vrednosti[5] = {0, 0, 0, 0, 0};

    while (1) {
        int n, i = 1;

        if (!(cin >> n)) {
            break;
        }

        int najgolem = (n % 10), indeks = 0;
        n /= 10;

        while (n > 0) {
            int d = n % 10;

            if (d > najgolem) {
                najgolem = d;
                indeks = i;
            }

            n /= 10;
            i++;
        }

        vrednosti[indeks]++;
    }

    for (int i = 0; i < 5; i++) {
        cout << i << ": " << vrednosti[i] << endl;
    }

    return 0;
}