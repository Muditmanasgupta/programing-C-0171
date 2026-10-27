#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cout << "input a . " << endl;
    cin >> a;
    cout << "input b . " << endl;
    cin >> b;
    cout << "input c . " << endl;
    cin >> c;
    if (a > b && a > c) {
        cout << "a is the largest" << endl;
    } else if (b > a && b > c) {
        cout << "b is the largest" << endl;
    } else {
        cout << "c is the largest" << endl;
    }
    return 0;
}