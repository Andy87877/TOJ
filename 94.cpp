#include <iostream>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll n;
    string judge[4] = {"Spring!","Summer!","Autumn!","Winter!"};
    cin >> n;
    if (n <= 2) {
        n += 12;
    }
    n -= 3;
    cout << judge[n/3] << endl;
}