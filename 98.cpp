#include <iostream>
// #include <cmath>
// #include <map>
// #include <string>
// #include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll ans = 299792458;
    cout << "1 Light-second(LS) is " << ans << " metres.\n";
    ans *= 60;
    cout << "1 Light-minute(LM) is " << ans <<  " metres.\n";
    ans *= 60;
    cout << "1 Light-hour(LH) is " << ans <<  " metres.\n";
    ans *= 24;
    cout << "1 Light-day(LD) is " << ans <<  " metres.\n";
    ans *= 7;
    cout << "1 Light-week(LW) is " << ans <<  " metres.\n";
    ans = ans/7*365;
    cout << "1 Light-year(LY) is " << ans <<  " metres.\n";
}