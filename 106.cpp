// https://toj.tfcis.org/oj/pro/106/
#include <iostream>
using namespace std;

int n = 2;
int main() {
    while ((n % 71)) {
        n = n*2+1;
    }
    if (!(n%3)) {
        cout << "right\n";
    } else {
        cout << "left\n";
    }
}