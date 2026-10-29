#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3, s4, s5, total;
    double percentage;

    cout << "Enter marks of 1st subject: ";
    cin >> s1;
    cout << "Enter marks of 2nd subject: ";
    cin >> s2;
    cout << "Enter marks of 3rd subject: ";
    cin >> s3;
    cout << "Enter marks of 4th subject: ";
    cin >> s4;
    cout << "Enter marks of 5th subject: ";
    cin >> s5;

    total = s1 + s2 + s3 + s4 + s5;
    percentage = (total / 500.0) * 100;

    cout << "Total marks is: " << total << endl;
    cout << "Your percentage is: " << percentage << endl;

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