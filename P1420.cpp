//
// Created by david on 2025/6/15.
//
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    int cnt = 1;
    int max = 1;
    for (int i = 0; i < n-1; ++i) {
        if (a[i] + 1 == a[i+1]) {
            cnt++;
            max = max < cnt ? cnt : max;
        }  else {
            cnt = 1;
        }

    }
    cout<<max<<endl;
    return 0;
}
