#include <stdio.h>
#include<string.h>
#include<ctype.h>
float recursive(int * a,int N,int i){
    if(i==N-1){
        return a[i];
    }
    return a[i]+(1/ recursive(a,N,i+1));
}
int main() {
int n; int niza[100];
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&niza[i]);
    }
    printf("%f",recursive(niza,n,0));
    return 0;
}