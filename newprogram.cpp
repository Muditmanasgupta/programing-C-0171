#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter your number brtween 1-5" << endl;
    int number;
    cin >> number;
    if (number <= 0)
    {
        cout << "enter again." << endl;
        return 1;
    }
    else if (number <= 5)
    {
        cout << "your guess is: " << number << endl;
    }
    else if (number > 5)
    {
        cout << "enter again." << endl;
        return 1;
    }
    cout << number << endl;
}