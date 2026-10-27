#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    int n;
    cout << "input a 4 digit no. " << endl;
    cin >> n;
    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    n = n / 10;
    d = n % 10;
    if (n== pow(a,4)+pow(b,4)+pow(c,4)+pow(d,4))
    {
        cout << "it is a armstrong no. ";
    }
    else
    {
        cout << "it is not a armstrong no. ";
    }
    return 0;
}