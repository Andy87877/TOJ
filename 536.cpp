#include <bits/stdc++.h>
using namespace std;


int main() {
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    if ((c<=a && d>=b) || (c<=b && c>=a) || (d<=b && d>=a)){
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
}