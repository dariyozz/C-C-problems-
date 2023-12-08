#include<stdio.h>
#include<string.h>
#include<ctype.h>
//void swap(int * a, int * b){
//    int tmp=*a;
//    *a=*b;
//    *b=tmp;
//}
//int sort(int * niza,int n){
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j <n-i-1; ++j) {
//            if(niza[j]>niza[j+1]){
//                swap(&niza[j],&niza[j+1]);
//            }
//        }
//
//    }
//}
int par(int * str, int n) {
    int cnt=0;int min;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i==0 && j==0){
                min=str[j];
            }
            if(min>str[j]){
                min=str[j];
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if(str[i]==min){
            cnt++;
        }
    }
    if(cnt%2==0){
        return min;
    }
    return 0;
}
int main (){
    int N; int line[100];
    scanf("%d",&N);
    for (int i = 0; i < N; ++i) {
        scanf("%d",&line[i]);
    }
//    sort(line,N);
    if(par(line,N)){
        printf("Najmaliot element koj se pojavuva paren broj pati e %d", par(line,N));
    } else{
        printf("Nitu eden element ne se pojavuva paren broj pati!");
    }
    return 0;
}
