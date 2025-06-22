//
// Created by csucoderlee on 2025/6/22.
//
# include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool flag = false;
    for (int f = 10000; f <= 30000 ; f++) {
        int a = f / 100;
        int b = f % 10000 / 10;
        int c = f % 1000;

        if (( a % n == 0) && (b % n == 0) && (c % n == 0)) {
            cout << f << endl;
            flag = true;
        }
    }
    if (!flag) {
        cout << "No" << endl;
    }

    return 0;
}