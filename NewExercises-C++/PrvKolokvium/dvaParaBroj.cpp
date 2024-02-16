#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int n,a,b,cntParovi=0,vkVneseni=0;
    cin>>n;
    cin>>a>>b;
    while (a!=0 && b!=0){
            if(abs(a)+ abs(b)==n) {
                cntParovi++;
            }
        vkVneseni++;
        cin>>a>>b;
    }
    int procent = cntParovi == 0 ? 0 : ((float)cntParovi/vkVneseni)*100;
    cout<<"Vnesovte "<<cntParovi<<" parovi od broevi chij zbir e "<<n<<endl;
    cout<<"Procentot na parovi so zbir "<<n<<" e "<<procent<<"%"<<endl;
    return 0;
}