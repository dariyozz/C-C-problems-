#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrica[n][m];

    for(int i = 0; i < n; i++) {
        int s1 = 0, s2 = 0;
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrica[i][j]);
            int sr = (m / 2);

            if(j < sr) { s1 += matrica[i][j]; }

            sr = m % 2 == 0 ? (m / 2) - 1 : (m / 2);
            if(j > sr) { s2 += matrica[i][j]; }

            int razlika = s1 - s2 >= 0 ? s1 - s2 : s2 - s1;

            if(m % 2 == 0) { matrica[i][sr] = matrica[i][sr + 1] = razlika; }
            else { matrica[i][sr] = razlika; }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}