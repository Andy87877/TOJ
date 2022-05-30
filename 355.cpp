#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int n, k, num, max = 0, max2 = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num >= max) {
            max2 = max;
            max = num;
        } else if (num >= max2) {
            max2 = num;
        }
    }
    cout << max2 << "\n";
}