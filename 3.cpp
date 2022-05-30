// https://toj.tfcis.org/oj/pro/3/
#include <iostream>
using namespace std;

int t,a,b;
int main() {
    cin >> t;
    while (t--) {
        cin >> a >> b;
        while((a != 0) && (b != 0)) {
            if (a > b) {
                a %= b;
            } else {
                b %= a;
            }
        }
        if (a > b) {
            cout << a << "\n";
        } else {
            cout << b << "\n";
        }
    }
}