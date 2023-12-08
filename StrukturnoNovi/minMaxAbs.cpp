#include<iostream>

using namespace std;
int main(){
    int n,broj,flag = 1;
    int min,max,absolutna;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>broj;
        if(flag){
            max = broj;
            min = broj;
            flag = 0;
            continue;
        }
        if(max < broj){
            max = broj;
        }
        if(min > broj){
            min = broj;
        }
    }
    absolutna = abs(min-max);
    cout<<"Max: "<<max<<" "<<"Min: "<<min<<" "<<" "<<absolutna;
    return 0;
}