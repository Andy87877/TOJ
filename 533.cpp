#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c;
    string str[2] = {"no","yes"};
    cin >> a >> b >> c;
    cout << str[(a <= c) && (c <= b)] << "\n";
}