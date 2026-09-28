#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int days, month, remaining_days;
    cout << " Give the no. of dayes :" << endl;
    cin >> days ;
    month = days / 30;
    remaining_days = days % 30;
    cout << "Number of months are : " << month << endl;
    cout << "Remaining days are : " << remaining_days << endl;
    return 0;
}