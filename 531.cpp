#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b;
    string str[2] = {"false", "true"};
    cin >> a >> b;
    cout << str[(a < b)] << "\n";
}