#include<iostream>
#include <cstring>

using namespace std;

int checkTwoDigits(char *line) {
    int cnt = 0;
    for (int i = 0; i < strlen(line); ++i) {
        if (isdigit(line[i])) cnt++;
    }
    return cnt >= 2 ? 1 : 0;
}

void printLine(char *line) {
    int startDigit, lastDigit, len = strlen(line);
    for (int i = 0; i < len; ++i) {
        if (isdigit(line[i])) {
            startDigit = i;
            break;
        }
    }
    for (int i = len - 1; i > 0; --i) {
        if (isdigit(line[i])) {
            lastDigit = i;
            break;
        }
    }
    for (int i = startDigit; i <= lastDigit; ++i) {
        cout << line[i];
    }
}

int main() {
    char line[100];
    char lastLine[100];
    while (true) {
        fgets(line, 100, stdin);
        if (line[0] == '0') break;
        if (checkTwoDigits(line) && strlen(line) > strlen(lastLine)) {
            strcpy(lastLine, line);
            lastLine[strlen(lastLine) - 1] = '\0';
        };
    }
    printLine(lastLine);
    return 0;
}
