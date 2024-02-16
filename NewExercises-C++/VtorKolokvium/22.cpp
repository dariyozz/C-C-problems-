#include<iostream>
#include<cstring>

using namespace std;

int isPalindrom(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; ++i) {
        if (word[i] != word[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int hasSpecialChar(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len; ++i) {
        if (word[i] == '!' || word[i] == '?' || word[i] == '.' || word[i] == ',') {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n, flag = 0;
    cin >> n;
    char word[100], maxWord[100];
    for (int i = 0; i < n; ++i) {
        cin.getline(word, 100);
        if (strlen(word) > strlen(maxWord) && isPalindrom(word) && hasSpecialChar(word)) {
            strcpy(maxWord, word);
            flag = 1;
        }
    }
    if (flag) {
        cout << maxWord;
    } else {
        cout << "Nema!";
    }

    return 0;
}
