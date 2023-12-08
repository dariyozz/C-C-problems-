#include<stdio.h>

int main(){
    float A[100][100];
    float B[100][100];
    int n;
    scanf("%d",&n);
    if(n<2){
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%f",&A[i][j]);
        }
    }
    float X=0,Y=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i>j){
                X+=A[i][j];
            }
            if((n - 1 - i) < j){
                Y+=A[i][j];
        }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            B[i][j]=(i==j && i+j==n-1) ? X+Y : i==j ? X : i+j==n-1 ? Y : 0;
        }
        }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%.1f ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
