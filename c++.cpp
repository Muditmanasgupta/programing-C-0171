#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, d, e, f, sum, rev;
    cout << " Enter 5 digit no.no :" << endl;
    cin >> n;
    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    n = n / 10;
    d = n % 10;
    n = n / 10;
    e = n % 10;
    sum = a + b + c + d + e;
    rev = a * 10000 + b * 1000 + c * 100 + d * 10 + e;
    f = b + d;
    cout << "Sum of digits: " << sum << endl;
    cout << "Reversed number: " << rev << endl;
    cout << "Sum of 2nd and 4th digits: " << f << endl;
    return 0;
}