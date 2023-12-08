#include<stdio.h>
#include<ctype.h>
#include<string.h>

void wtf() {
    FILE *f = fopen("matrica.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    //vasiot kod ovde
    int m,n;
    int matrix[100][100];
    FILE * f= fopen("matrica.txt","r");
    fscanf(f, "%d %d",&m,&n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            fscanf(f,"%d",&matrix[i][j]);
        }
    }
    fclose(f);
    int rez=0;
    for (int j= 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            if (matrix[i][j] > 9) {
                if (matrix[i][j] == (i * 10) + j) {//21==2 1
                    rez++;
                }
            } else {
                if (matrix[i][j] < 10) {
                    if (matrix[i][j] == j) { //1 == [0][1]=j
                        rez++;
                    }
                }
            }
        }
        printf("%d\n",rez);
    }
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            printf("%d ",matrix[i][j]);
//        }
//        printf("\n");
//    }
    return 0;
}
