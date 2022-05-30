#include <iostream>
using namespace std;

int n;
string s;
int main() {
    while (cin >> n) {   
        getline(cin, s);
        getline(cin, s);
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < (s.size()/n); j++) {
                cout << s[j*n+i] << "";
            }
        }
        cout << "\n";
    }
}
