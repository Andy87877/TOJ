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
    n %= 10;
    n *= n;
    n %= 10;
    cout << n << endl;
}