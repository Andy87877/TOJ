#include <iostream>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    if (n == 100) {
        cout << "S";
    } else if (n >= 90) {
        cout << "A";
    } else if (n >= 80) {
        cout << "B";
    } else if (n >= 70) {
        cout << "C";
    } else if (n >= 60) {
        cout << "D";
    } else {
        cout << "F";
    }
    cout << endl;
}