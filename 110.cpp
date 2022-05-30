// https://toj.tfcis.org/oj/pro/110/
#include <iostream>
using namespace std;
int n, t;

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        // 上
        for (int i = 0; i < n-3; i++) {
            for (int j = n-2; j >= i; j--) {
                cout << " ";
            }
            for (int j = 0; j < i*2+1; j++) {
                cout << "*";
            }
            cout << "\n";
        }
        // 中上
        for (int i = 0; i < n*2-1; i++) {
            cout << "*";
        }
        cout << "\n";
        // 中中
        cout << " ";
        for (int i = 0; i < n*2-3; i++) {
            cout << "*";
        }
        cout << "\n";
        // 中下
        for (int i = 0; i < n*2-1; i++) {
            cout << "*";
        }
        cout << "\n";

        // 下
        for (int i = n-4; i >= 0; i--) {
            for (int j = n-2; j >= i; j--) {
                cout << " ";
            }
            for (int j = 0; j < i*2+1; j++) {
                cout << "*";
            }
            cout << "\n";
        }
    }
}