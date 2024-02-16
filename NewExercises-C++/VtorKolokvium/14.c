#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {

    writeToFile();
    FILE *f = fopen("text.txt", "r");
    char prv = fgetc(f);
    char vtor;
    int cnt = 0;
    while ((vtor = fgetc(f)) != EOF) {
        prv = tolower(prv);
        vtor = tolower(vtor);
        if (isVowel(prv) && isVowel(vtor)) {
            printf("%c%c\n", prv, vtor);
            cnt++;
        }
        prv = vtor;
    }
    printf("%d", cnt);
    fclose(f);

    return 0;
}
