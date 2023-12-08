#include <stdio.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') { fputc(c, f); }
    fclose(f);
}

int main() {
    wf();
    // vasiot kod pocnuva od ovde

    FILE *f;
    if(!(f = fopen("livce.txt", "r"))) return -1;

    int n, indeks = 0;
    char shifra[20][20];
    int tip[10];
    float koef[10];

    fscanf(f, "%d", &n);

    while(!feof(f)) {
        fscanf(f, "%s %d %f", shifra[indeks], &tip[indeks], &koef[indeks]);
        if(feof(f)) break;
        indeks++;
    }

    float s = n, maxKoeficient = 0;
    int r = indeks;

    for(int i = 0; i < indeks; i++) {
        s *= koef[i];

        if(koef[i] > maxKoeficient) {
            maxKoeficient = koef[i];
            r = i;
        }
    }

    printf("%s %d %.2f\n%.2f", shifra[r], tip[r], koef[r], s);

    return 0;
}