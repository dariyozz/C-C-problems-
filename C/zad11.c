#include <stdio.h>

void printArray(int *niza, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", niza[i]);
    }

    printf("\n");
}

void printEmptyArray(int n) {
    for(int i = 0; i < n; i++) {
        printf("0 ");
    }
    printf("\n");
}

int shiftRight(int *niza, int n, int x) {
    if(x == 0) return 0;

    for(int i = n - 1; i > 0; i--) {
        niza[i] = niza[i - 1];
        niza[i - 1] = 0;
    }

    return shiftRight(niza, n, x - 1);
}

int shiftLeft(int *niza, int n, int x) {
    if(x == 0) return 0;

    for(int i = 0; i < n - 1; i++) {
        niza[i] = niza[i + 1];
        niza[i + 1] = 0;
    }

    return shiftLeft(niza, n, x - 1);
}

int abs(int n) {
    return n >= 0 ? n : -n;
}

int main() {
    int k, n, x, prazni = 0, niza[100];
    scanf("%d", &k);

    for(int i = 0; i < k; i++) {
        scanf("%d", &n);

        for(int j = 0; j < n; j++) {
            scanf("%d", &niza[j]);
        }

        x = niza[0];

        if(abs(x) >= n) {
            prazni++;
            printEmptyArray(n);
            continue;
        }

        if(x < 0) { shiftLeft(niza, n, -x); }
        else if(x > 0) { shiftRight(niza, n, x); }

        printArray(niza, n);
    }

    printf("%d", prazni);

    return 0;
}