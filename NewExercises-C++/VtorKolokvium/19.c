#include<stdio.h>

int main() {
    int M, N, i ,j;
    int matrix[100][100];
    scanf("%d%d", &M, &N);
    for ( i = 0; i < M; ++i) {
        for ( j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int cnt=0;
//    3 8
//    0 0 1 1 1 0 0 0
//    1 1 1 0 1 1 1 0
//    0 1 1 1 1 0 0 1
        for (i = 0; i < M; ++i) {
            for (j = 0; j < N - 2; ++j) {
                if (matrix[i][j] == 1 && matrix[i][j + 1] == 1 && matrix[i][j + 2] == 1) {
                    cnt++;
                    break;
                }
            }
        }

        for (j = 0; j < N; ++j) {
            for (i = 0; i < M-2; ++i) {
                if(matrix[i][j]==1 && matrix[i+1][j]==1 && matrix[i+2][j]==1){
                    cnt++;
                    break;
                }
            }
        }
    printf("%d",cnt);
// 00 01 02 03
// 10 11 12 13
// 20 21 22 23
// 30 31 32 33
    return 0;
}

