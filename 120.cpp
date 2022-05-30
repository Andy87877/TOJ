#include <iostream>
#define ll long long
using namespace std;

ll n, q;
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    ll star[n], startotal[n];

    cin >> star[0];
    startotal[0] = star[0]; 
    for (int i = 1; i < n; i++) {
        cin >> star[i];
        startotal[i] = star[i] + startotal[i-1]; 
        //cout << startotal[i] << endl;
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        ll a,b;
        cin >> a >> b;
        cout << (startotal[max(a,b)-1]-startotal[min(a,b)-1]+star[min(a,b)-1]) << "\n";
    }
}