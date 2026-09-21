#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, s, area, e;
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "area of trancle is = " << area << endl;
    return 0;
}