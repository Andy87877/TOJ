#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t,a,b;
    cin >> t;
    while (t--) {
        ll ans = 1;
        cin >> a >> b;
        for (ll i = 0; i < b; i++) {
            ans *= a;
        }
        cout << ans << endl;
    }
}