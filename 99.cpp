// Judge有bug 但AC解是這個
#include <iostream>
#define ll long long
using namespace std;

int main() {
    long double a,b,c,d, ans, e = 1e-9;
    cin >> a >> b;
    cin >> c >> d;
    ans = (a*d)-(b*c);
    if ((ans < e) && (ans > -e)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}