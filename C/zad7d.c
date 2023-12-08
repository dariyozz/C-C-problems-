
#include <stdio.h>

double apsolutna(double n) {
    return n >= 0 ? n : -n;
}

int main() {
    int n, m, naj;
    double s, prosek;
    scanf("%d %d", &n, &m);

    int matrica[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrica[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        s = 0;
        for(int j = 0; j < m; j++) {
            s += matrica[i][j];
        }

        prosek = s / m;
        naj = matrica[i][0];

        for(int j = 0; j < m; j++) {
            if(apsolutna(prosek - matrica[i][j]) > apsolutna(prosek - naj)) {
                naj = matrica[i][j];
            }
        }

        printf("%d ", naj);
    }

    return 0;
}