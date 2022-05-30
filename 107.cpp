// https://toj.tfcis.org/oj/pro/107/
#include <iostream>
using namespace std;

int total = 0, temp;
int main() {
    for (int i = 1; i <= 30; i++) {
        temp = 0;
        for (int j = 1; j <= i; j++) {
            temp += j;
        }
        temp *= i;
        total += (1+i+temp);
        //cout << i << " " << temp << endl;
    }
    cout << total << "\n";
}