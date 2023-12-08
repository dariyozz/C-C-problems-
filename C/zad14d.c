#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N>50){return 0;}
    int A[50][50]; int B[50][50];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 2*N; ++j) {
            scanf("%d",&A[i][j]) ;
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            B[i][j]=A[i][j] ;
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = N; j < 2*N; ++j) {
            B[i+N][j-N]=A[i][j] ;
        }
    }
    for (int i = 0; i < 2*N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
