#include <iostream>
using namespace std;
int reverseBroj(int n){
    int rev = 0 ;
    while (n!=0){
        rev = rev * 10 + n%10;
        n/=10;
    }
    return rev;
}
int numDigits(int n){
    int cnt = 0 ;
    while (n!=0){
        cnt++;
        n/=10;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    if(n<10) {
        cout<<"Brojot ne e validen";
        return 0;
    }
    int interesen=0;
    for (int i = 9; i < n; ++i) {
        int reverse = reverseBroj(i);
        int numberOfDigits = numDigits(i);
        if(reverse%numberOfDigits==0){
            interesen=i;
        }
    }
    cout<<interesen;
    return 0;
}
