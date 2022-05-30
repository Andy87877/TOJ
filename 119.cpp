// https://toj.tfcis.org/oj/pro/119/
#include <iostream>
#include <cmath>
using namespace std;

int n, t, a, b, temp;
int main() {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> t;
    bool flag = false;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        if (abs(b - a) > 8) {
            flag = true;
            break;
        }
        swap(arr[a-1], arr[b-1]);
    }
    
    if (flag) {
        cout<<"I QUIT!\n";
    } else {
        cout << "SORTED!\n";
    }
    for (int j = 0; j < n-1; j++) {
        cout << arr[j] << " ";
    }
    cout << arr[n-1] << "\n";
}