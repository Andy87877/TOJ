// https://toj.tfcis.org/oj/pro/104/
#include <iostream>
using namespace std;

int n;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j >= 0; j--) {
            if (0 <= i-j) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        for (int j = 1; j < n; j++) {
            if (0 <= i-j) {
                cout << "*";
            }
        }
        cout << "\n";
    }
}
