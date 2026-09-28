#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    cout<<"enter the year to check if it is a leap year or not"<<endl;
    int year;
    cin>>year;
    (year%100==0)?((year%400==0)?cout<<"leap year":cout<<"not a leap year"):(year%4==0)?cout<<"leap year":cout<<"not a leap year";
    return 0;
}