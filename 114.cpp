// https://toj.tfcis.org/oj/pro/114/
#include <iostream>
using namespace std;

int arr[7][8] = {0};
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 7; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 7; j++) {
            if ((arr[i][j] == arr[i][j+1]) && (arr[i][j] == arr[i][j-1])) {
                cout << "Yes\n";
                return 0;
            }
            if ((arr[i][j] == arr[i+1][j]) && (arr[i][j] == arr[i-1][j])) {
                cout << "Yes\n";
                return 0;
            }
        }
    }
    cout << "No\n";
}