#include <iostream>
#include <cstring>

using namespace std;

int wordContainsSubstringA1c(char *word) {
    int len = strlen(word), cnt = 0;
    for (int i = 0; i < len - 2; ++i) {
        if (tolower(word[i]) == 'a' && tolower(word[i + 1]) == '1' && tolower(word[i + 2]) == 'c') {
            cnt++;
        }
    }
    return cnt >= 2 ? 1 : 0;
}

void printToLower(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len; ++i) {
        word[i] = tolower(word[i]);
    }
    cout << word << endl;
}

int main() {
    int n;
    char word[51];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> word;
        if (wordContainsSubstringA1c(word)) {
            printToLower(word);
        }
    }
    return 0;
}