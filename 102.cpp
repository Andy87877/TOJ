#include <iostream>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#include <iomanip>
#define ll long long
using namespace std;

int main() {
    double a,b;
    char s;
    cin >> a >> s >> b;
    cout << fixed << setprecision(4);
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
            cout << a << " / " << b << " = " << a/b;
        }
    }
    cout << endl;
}