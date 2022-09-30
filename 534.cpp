#include <bits/stdc++.h>
using namespace std;

int main() {
    string str[2] = {"no","yes"};
    long long a,b;
    cin >> a >> b;
    cout << str[(a%2) == (b%2)] << "\n";
}