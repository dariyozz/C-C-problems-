#include<stdio.h>
#include<string.h>
#include<ctype.h>
void premesti(int * niz,int n){
int b[100]; int ind=0;
    for (int i = 0; i < n; ++i) {
        if(niz[i]>=0){
            b[ind++]=niz[i];
        }
    }
    for (int i = 0; i < n; ++i) {
        if(niz[i]<0) {
            b[ind++]=niz[i];
        }
    }
    for (int i = 0; i < n; ++i) {
       niz[i]=b[i];
    }
}
int main(){
    int N;
    int a[100];
    scanf("%d",&N);
    for (int i = 0; i < N; ++i) {
        scanf("%d",&a[i]);
    }
    premesti(a,N);
    for (int i = 0; i < N; ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}