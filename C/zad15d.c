
#include <stdio.h>

int poramnet(int a) {
    if(a < 10) {
        if(a % 10 != 9) { return a; }
        else { return 7; }
    }

    int s = poramnet(a / 10);

    if(a % 10 != 9) { return (s * 10) + (a % 10); }
    else { return (s * 10) + 7; }
}

int main() {
    int n, niza[100], ct = 0;

    while(scanf("%d", &n)) {
        niza[ct] = poramnet(n);
        ct++;
    }

    for(int i = 1; i < ct; i++) {
        if(niza[i] < niza[i - 1]) {
            int pom = niza[i];
            niza[i] = niza[i - 1];
            niza[i - 1] = pom;
            i = 0;
        }
    }

    int elementi = ct <= 5 ? ct : 5;

    for(int i = 0; i < elementi; i++) {
        printf("%d ", niza[i]);
    }

    return 0;
}