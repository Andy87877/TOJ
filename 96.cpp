#include <iostream>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll a,b;
    char s;
    cin >> a >> s >> b;
    if (s == '+') {
        cout << a << " + " << b << " = " << a+b;
    } else if (s == '-') {
        cout << a << " - " << b << " = " << a-b;
    } else if (s == '*') {
        cout << a << " * " << b << " = " << a*b;
    } else {
        if (b == 0) {
            cout << "ERROR";
        } else {
            cout << a << " / " << b << " = " << a/b << " ... " << a%b;
        }
    }
    cout << endl;
}