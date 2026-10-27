#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
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

    if (a == d && b == c)
    {
        cout << "it is a palandrom ";
    }
    else
    {
        cout << "it is not a palandrom ";
        }
            return 0;
}