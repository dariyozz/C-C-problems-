#include<stdio.h>
int main() {
    char c,c2,p;
    scanf("%c", &c);
    c2 = c;
    while(scanf("%c", &c)) {
        if(c == '.') {
            printf("%c.", c2);
            break;
        }
        if((c2 >= 'b' && c2 <= 'z' && c2 != 'e' && c2 != 'o' && c2 != 'i' && c2 != 'u') && (c >= 'b' && c <= 'z' && c != 'e' && c != 'o' && c != 'i' && c != 'u')) {
            p = c2;
            c2 = c;
            c = p;
        }
        printf("%c", c2);
        c2 = c;
    }
    return 0;
}
