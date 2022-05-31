#include <iostream>
#define ll long long
using namespace std;

void print(ll n);
void printC(ll n);
void printE(ll n);
ll total, n;
char s;

void print(ll n) {
    for (ll i = 0; i < n; i++) {
        for (ll j = 1; j < n-i; j++) {
            cout << " ";
        }
        for (ll j = 0; j < i*2+1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void printC(ll n) {
    for (ll i = 1; i <= n; i++) {
        for (ll j = 0; j < i; j++) {
            for (ll k = 1; k < n-j; k++) {
                cout << " ";
            }
            for (ll k = 0; k < j*2+1; k++) {
                cout << "*";
            }
            cout << "\n";
        }
    }
}

void printE(ll n) {
    for(int g=1;g<=n;g++) {
        for(int j=1;j<=n-g+2;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*g-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int z=1;z<=2*n+3;z++) {
        cout<<"#";
    }
    cout<<"\n";
}

int main() {
    cin >> total;
    while (total--) {
        cin >> s >> n;
        if (s == 'A') {
            print(n);
        } else if (s == 'B') {
            print(n);
            print(n);
        } else if (s == 'C') {
            printC(n);
        } else if (s == 'D') {
            print(n*10);
        } else if (s == 'E') {
            printE(n);
        } else if (s == 'F') {
            print(n*2);
        } else if (s == 'G') {
            print(n*3);
        } else if (s == 'H') {
            print(n*7);
        } else {
            print(4*n-1);
        }
        cout << "\n";
    }
}


