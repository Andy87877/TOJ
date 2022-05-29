#include <iostream>
// #include <cmath>
// #include <map>
#include <string>
// #include <algorithm>
// #define ll long long
using namespace std;

int main() {
    string a,b,c,d;
    string judge[3] = {"OTZ", "=~=", "GOOD"};
    cin >> a >> c;
    cin >> b >> d;
    cout << judge[((a == b) + (c == d))] << endl;
}