#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    double percentage;
    cout << "Enter your percentage: ";
    cin >> percentage;
    if (percentage >= 90) {
        cout << "A" << endl;
    } 
    else if (percentage >= 75) {
        cout << "B" << endl;
    }
     else if (percentage >= 60) {
        cout << "C" << endl;
    } 
    else if (percentage >= 40) {
        cout << "D" << endl;
    } 
    else {
        cout << "Fail" << endl;
    }
    return 0;
}