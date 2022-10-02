#include <bits/stdc++.h>
using namespace std;

int n,k;
bool flag, flagloop;
void print(int n,int k, bool flag) {
    int temp = 0;
    flagloop = flag;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n*k; j++) {
            (flag) ? (cout << "*") : (cout << " ");
            temp++;
            if (temp == k) {
                temp = 0;
                flag = !flag;
            }
        }
        flag = flagloop;
        cout << "\n";
    }
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        print(n,k,i%2);
    }
}