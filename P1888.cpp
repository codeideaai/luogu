//
// Created by csucoderlee on 2025/6/22.
//
#include<iostream>
using namespace std;
int gcd(int a,int b) {
    while (b!=0) {
        int reminder = a % b;
        a = b;
        b = reminder;

    }
    return a;

}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int min = a;
    int max = c;

    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }

    if (a > max) {
        max = a;
    }

    if (b > max) {
        max = b;
    }

    int xxx = gcd(max, min);
    cout << min/xxx << "/" << max/xxx << endl;
}
