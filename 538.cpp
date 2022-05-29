#include <iostream>
// #include <cmath>
// #include <map>
// #include <string>
// #include <algorithm>
// #define ll long long
using namespace std;

int main() {
    double e,m,s;
    cin >> e >> m >> s;
    double a,b;
    cin >> a >> b;
    double goal;
    cin >> goal;

    double sum = 0;
    sum = 20*(e*1.25+m*2+s)/(15*4.25);
    sum += a*4/10;
    sum += b*4/10;
    //cout << sum << endl;
    if (sum >= goal) {
        cout << "YA\n";
    } else {
        cout << "QQ\n";
    }
}