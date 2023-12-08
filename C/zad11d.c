#include<stdio.h>
#include<string.h>
#include <ctype.h>
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int countDigits(char * a){
    int d=0;
    for (int i = 0; i < strlen(a); ++i) {
        if(isdigit(a[i])){
            d++;
        }
    }
    return d;
}
int main() {
    wtf();
    char line[100];char temp[100];
    FILE * f= fopen("input.txt","r");
    while (fgets(line,100,f)!=NULL) {
        int n=0,ct=0;
        for(int i = 0; i < strlen(line); i++) {
            if(line[i] >= '0' && line[i] <= '9') {
                temp[ct++] = line[i];
                n++;
            }
        }
        for (int i = 0; i < ct-1; ++i) {
            for (int j = 0; j < n-1; ++j) {
                if (temp[j] > temp[j + 1]) {
                    char tmp = temp[j];
                    temp[j]=temp[j+1];
                    temp[j+1]=tmp;
                }
            }
        }
        printf("%d:", countDigits(line));
        for (int i = 0; i < ct; ++i) {
            printf("%c",temp[i]);
        }
        printf("\n");
    }
    fclose(f);
    return 0;
}
