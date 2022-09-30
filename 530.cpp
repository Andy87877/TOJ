#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b;
    cin >> a >> b;
    if (a > b) swap(a,b);
    cout << a << " " << b << "\n";
}