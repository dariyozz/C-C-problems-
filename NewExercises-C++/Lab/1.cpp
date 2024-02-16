#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int n;
    float closest, sum = 0, arr[100], average;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    average = sum / n;
    int c = abs(average - arr[0]);
    closest = arr[0];
    for (int i = 1; i < n; ++i) {
        if (abs(average - arr[i]) < c) {
            c = abs(average - arr[i]);
            closest = arr[i];
        }
    }
    cout << fixed << setprecision(2) << closest;
    return 0;
}