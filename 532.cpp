#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b;
    cin >> a >> b;
    cout << (a%2 == 0)+(b%2 == 0) << " " << (a%3 == 0)+(b%3 == 0) << "\n";
}