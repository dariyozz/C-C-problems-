#include<iostream>
using namespace std;
int main (){
    char line;
    int cnt = 0;
    while (cin>>line && line != '.'){
        line = toupper(line);
        cnt += line=='A' ? 10 : line=='B' ? 11 : line=='C' ? 12 : line=='D' ? 13 : line=='E' ? 14 : line=='F' ? 15 : line-'0';
    }
    if((cnt%10 == 6 && cnt/10%10 == 1) && cnt%16 == 0){
        cout<<"Poln pogodok";
    }
    else if (cnt%16==0){
        cout<<"Pogodok";
    }
    else{
        cout<<cnt;
    }
    return 0;
}