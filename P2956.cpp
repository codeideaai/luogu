//
// Created by david on 2025/6/20.
//
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int count = 0;
    int x, y, n;
    cin >> x >> y >> n;
    bool md[241][241];
    for (int i = 1; i <= n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for(int j = b; j <= d; j++) {
            for(int k = a; k <= c; k++) {
                md[k][j] = true;
            }
        }
    }

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            if (md[i][j]) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}