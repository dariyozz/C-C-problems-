#include<iostream>

using namespace std;
int isBlagBroj(int broj){
    while (broj!=0){
        if((broj%10)%2!=0){
            return 0;
        }
        broj/=10;
    }
    return 1;
}
int main(){
    int m,n,flag=0;
    cin>>m>>n;
    for (int i = m; i <= n; ++i) {
        if(isBlagBroj(i)){
            cout<<i;
            flag=1;
            break;
        }
    }
    if(!flag){
        cout<<"NE";
    }
    return 0;
}