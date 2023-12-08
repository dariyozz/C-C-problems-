#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isMaxPalindrom(char * a){
    int i;
    int dolz= strlen(a)-1;
    for (i = 0;  i<dolz/2 ; i++) {
        if (a[i] != a[dolz - i]) {
            return 0;
        }
    }
    return 1;
}
int specijalenZnak(char niza[100]) {
    for(int i = 0; i < strlen(niza); i++) {
        if(!isalnum(niza[i]) && !isspace(niza[i])) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int n, len = -1;
    scanf("%d", &n);

    char niza[100], najgolem[100];

    for(int i = 0; i < n; i++) {
        scanf("%s", niza);
        if(isMaxPalindrom(niza) && specijalenZnak(niza) && (int)strlen(niza) > len) {
            len = strlen(niza);
            strcpy(najgolem, niza);
        }
    }

    printf("%s", len != -1 ? najgolem : "Nema!");

    return 0;
}