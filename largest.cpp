#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    //describe the largest no. among 3 user input value
    int a, b, c;
    cout << "Enter first number: "<<endl;
    cin >> a;
    cout << "Enter second number: "<<endl;
    cin >> b;
    cout << "Enter third number: "<<endl;
    cin >> c;
    (a>b)?((a>c)?cout << "The largest number is: "<<a:cout<< "The largest number is: "<<c):((b>c)?cout<< "The largest number is: "<<b:cout<< "The largest number is: "<<c);
    return 0;
}