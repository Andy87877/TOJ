#include <iostream>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll a,b;
    cin >> a >> b;
    a += 7;
    if (a <= b) {
        cout << "PASS!\n";
    } else {
        cout << "FAIL! You see see you!\n";
    }
}