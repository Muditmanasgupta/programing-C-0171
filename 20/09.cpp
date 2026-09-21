#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a number of dayes : " << endl;
    cin >> a >> endl;
    b = a / 30;
    cout << "The number of months is: " << b << endl;
    c = a % 30;
    cout << "The number of days is: " << c << endl;
    return 0;
}