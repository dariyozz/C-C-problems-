#include <stdio.h>
#include <string.h>

#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int findLenght(int c) {
    int len = 0;
    while (c != 0) {
        len++;
        c /= 10;
    }
    return len - 1;
}

int checkMaxDigit(int c) {
    int del = 1;
    for (int i = 0; i < findLenght(c); ++i) {
        del *= 10;
    }
    return c / del;
}

int main() {
    wtf();
    FILE *f = fopen("broevi.txt", "r");
    int n;
    while ((fscanf(f, "%d", &n)) && !feof(f)) {
        if (n == 0) break;
        int cifra = 0, brojMaxCifra = 0, flag = -1;
        for (int i = 0; i < n; ++i) {
            fscanf(f, "%d", &cifra);
            if (flag == -1 || checkMaxDigit(cifra) > checkMaxDigit(brojMaxCifra)) {
                brojMaxCifra = cifra;
                flag = 1;
            }
        }
        printf("%d\n", brojMaxCifra);
    }
    fclose(f);
}