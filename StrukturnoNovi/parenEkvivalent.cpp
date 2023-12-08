#include<iostream>
using namespace std;

int parenEkvivalent(int n, int m) {
    int pos = 1;
    int b = 1;
    while(n > 0) {
        if(pos % 2 != 0) {
            n /= 10;
            pos++;
//            continue;
        }
        if(n % 10 != m % 10) {
            b = 0;
            break;
        } else if(n % 10 == m % 10) {
            m /= 10;
        }
        n /= 10;
        pos++;
    }
    return b;
}

int main() {
    int n, m;
    cin>>n>>m;
    if(n <= 0 || m <= 0) {
        cout<<"Invalid input";
        return 0;
    }
    int pe;
    if(n >= m) {
        pe = parenEkvivalent(n, m);
    } else {
        pe = parenEkvivalent(m, n);
    }

    if(pe) {
        cout<<"PAREN";
    } else {
        cout<<"NE";
    }

    return 0;
}