//
// Created by david on 2025/6/15.
//
#include<iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d;
    if (b > d) {
        f = d + 60 - b;
        e = c - a - 1;
    } else {
        f = d - b;
        e = c - a;
    }
    cout << e << ' ' << f;
    return 0;
}
