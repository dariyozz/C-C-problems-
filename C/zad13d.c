#include<stdio.h>

int main(){
    int x,m,n,matrix[100][100];
    int temp[100][100];
    scanf("%d",&x);
    scanf("%d%d",&m,&n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d",&matrix[i][j]);
        }
    }
    int sum=0;
    int i,j;
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            sum+=matrix[i][j];
        }
        for( j = 0; j < n; j++) { temp[i][j] = sum > x ? 1 : sum < x ? -1 : 0; }
    }
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
    return 0;
}
