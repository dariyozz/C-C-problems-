#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrica[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrica[i][j]);
        }
    }

    int x, y;
    scanf("%d %d", &x, &y);

    int prv, vtor, tret, chetvrt;
    prv = vtor = tret = chetvrt = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            // prv kvadrant
            if(i < x && j >= y) { prv += matrica[i][j]; }

            // vtor kvadrant
            if(i < x && j < y) { vtor += matrica[i][j]; }

            // tret kvadrant
            if(i >= x && j < y) { tret += matrica[i][j]; }

            // chetvrt kvadrant
            if(i >= x && j >= y) { chetvrt += matrica[i][j]; }
        }
    }

    printf("%d %d %d %d", prv, vtor, tret, chetvrt);

    return 0;
}