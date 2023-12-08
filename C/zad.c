#include<stdio.h>
#include<string.h>
#include<ctype.h>
void printFile() {
    FILE *f=fopen("matrica.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}
int main () {
    int m, n, r, k, i, j;
    scanf("%d%d", &m, &n);
    scanf("%d%d", &r, &k);
    int matrix[100][100];
    int min;
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d",&matrix[i][j]);
            if (i == 0 && j==0) {
                min = matrix[0][0];
            }
            if (min > matrix[i][j]) {
                min = matrix[i][j];
            }
        }
    }
    for (i = 0; i < r; ++i) {
        for (j = 0; j < k; ++j) {
            matrix[i][j] = min;
        }
    }
FILE * f = fopen("matrica.txt","w");
    for (i = 0; i<m; i++) {
        for (j = 0; j<n ; j++) {
            fprintf(f,"%d ",matrix[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);
    printFile();
        return 0;
    }