#include <bits/stdc++.h>
using namespace std;

string solve() {
    string str;
    cin >> str;
    if (str.size() != 4) {
        return "OAQ";
    }
    char check = str[0];
    for (int i = 1; i < str.size(); i++) {
        if (check != str[i]) {
            return "OAQ";
        }
    }
    return "GREAT!!";
}
int main() {
    cout << solve() << endl;
}