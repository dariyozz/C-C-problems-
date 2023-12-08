#include<stdio.h>
int checkCondicion(int k,int m){
    if(k==-1 && m==-1){
        return 0;
    }
    return 1;
}
int main(){
  int n,i,a,b,cnt=0,sumPm10=0,sumPM25=0;
    scanf("%d",&n);
    for (i = 0;  i<n ; i++) {
        scanf("%d%d",&a,&b);
        if(checkCondicion(a,b)){
            sumPm10+=a;
            sumPM25+=b;
            cnt++;
    }
    }
    printf("PM10: %0.2f\n",(float)sumPm10/cnt);
    printf("PM2.5: %0.2f",(float)sumPM25/cnt);

    return 0;
}