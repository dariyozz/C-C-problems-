#include<iostream>
#include<cstring>

using namespace std;

int par(int num, int n, int arr[]) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == num) {
            cnt++;
        }
    }
    return cnt % 2 == 0 ? 1 : 0;
}

int main() {
    int n, arr[100], min = -1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        int paren = par(arr[i], n, arr);
        if(paren == 1 && (min == -1 || arr[i] < min))
            min = arr[i];
    }
    if (min != -1)
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << min;
    else
        cout << "Nitu eden element ne se pojavuva paren broj pati!";
    return 0;
}