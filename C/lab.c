#include<stdio.h>
int fun(int a){
    if(a>1)
        return 2* fun(a-1);
    else
        return 2;
}
int main(){
    printf("%d",fun(6));
    return 0;
}