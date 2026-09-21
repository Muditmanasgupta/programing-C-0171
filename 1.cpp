#include <bits/stdc++.h>

using namespace std;

int main() {
    double p, r, t, si,total ;
    cin >> p>>r>>t;
    si= (p * r * t) / 100;
    cout << "PRINCIPAL AMOUNT IS = " << p << endl;
    cout << "INTREST IS = " << r << endl;
    cout << "NO. OF YEAR IS = " << t << endl;
    cout << "SIMPLE INTREST IS = " << si << endl;
    total = si + p;
    cout << "total amount is =  " << total << endl;
    return 0;

}