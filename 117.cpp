// https://toj.tfcis.org/oj/pro/117/
#include <iostream>
using namespace std;

int a,n,M = -1;
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> a;
    while(a--) {
        cin >> n;
        if (M < n) {
            M = n;
        }
    }
    cout << M << "\n";
}