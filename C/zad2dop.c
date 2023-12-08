#include<stdio.h>
int sum_pos(int * niz,int N,int idx){
    int sum=0;
    for (int i = idx; i < N; ++i) {
        sum+=(*(niz+i));
    }
    return sum;
}
int main(){
    int n,ind;
    int br[100];
    scanf("%d",&n);
    if(n>100){
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d",br+i);
    }
    scanf("%d",&ind);
    if(ind>n){
        return 0;
    }
        printf("%d",sum_pos(br,n,ind));

    return 0;
}