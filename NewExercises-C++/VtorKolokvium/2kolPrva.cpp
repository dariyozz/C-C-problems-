#include<iostream>
#include<cstring>
#include <algorithm>

using namespace std;

int checkSubsequent(char *word, char *recenica) {
    int s = 0, m = 0;
    for (int i = 0; i < strlen(recenica); ++i) {
        int lenWord = strlen(word);
        if (strncmp(recenica + i, word, lenWord) == 0) {
            s++;
            while (strncmp(recenica + i + lenWord, word, strlen(word)) == 0) {
                s++;
                lenWord += lenWord;
            }
            m = max(s, m);
            s = 0;
        }
    }
    return m;
}

int main() {
    char word[21], recenica[151];
    int n, arr[150] = {0}, cnt = 0, max = 0;
    cin.getline(word, 21);
    cin >> n;
    cin.get();

    for (int i = 0; i < n; ++i) {
        cin.getline(recenica, 151);
        cnt = checkSubsequent(word, recenica);
        arr[cnt]++;
        if (max < cnt) max = cnt;
    }

    for (int i = 0; i <= max; ++i) {
        cout << i << ": " << arr[i] << endl;
    }
    return 0;
}