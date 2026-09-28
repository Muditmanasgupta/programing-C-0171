#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, d, e, f, g, h, i, j, sum, rev;
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
    cout << "Sum of digits: " << sum << endl;
    cout << "enter the 1st position ehich you want to add: ";
    cin >> f;
    cout << "enter the 2st position ehich you want to add: ";
    cin >> g;
    i = (n / (int)pow(10, f - 1)) % 10;
    j = (n / (int)pow(10, g - 1)) % 10;
    h = i + j;
    cout <<"answer  ="<<h;
}