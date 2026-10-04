#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    switch (age)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        cout << "You are not eligible to vote." << endl;
        break;
    case 18:
        cout << "You are just eligible to vote." << endl;
        break;

    default:
        cout << "You are eligible to vote." << endl;

        break;
    }
    return 0;
}