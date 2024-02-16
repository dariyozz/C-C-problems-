#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int sum;
    cin >> sum;

    char maxCode[10];
    int maxType;
    double maxCoefficient = 0.0;
    double totalCoefficient = 1.0;

    while (true) {
        char code[10];
        int type;
        double coefficient;

        scanf("%s", code);

        if (code[0] == '#') {
            break;
        }

        cin >> type >> coefficient;

        if (coefficient > maxCoefficient) {
            strcpy(maxCode, code);
            maxType = type;
            maxCoefficient = coefficient;
        }

        totalCoefficient *= coefficient;
    }

    double possibleGain = sum * totalCoefficient;

    cout << maxCode << " " << maxType << " " <<maxCoefficient << endl << possibleGain << endl;
    return 0;
}