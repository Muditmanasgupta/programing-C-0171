#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, N;
    int a, b, c, d, e, f, g, h, i, j, sum;
    
    cout << "Enter 5 digit no: " << endl;
    cin >> n;
    
    N= n; 

    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    n = n / 10;
    d = n % 10;
    n = n / 10;
    e = n % 10;

    sum = a + b + c + d + e;
    cout << "Sum of digits: " << sum << endl;

    cout << "Enter the 1st position which you want to add (1 to 5): " << endl;
    cin >> f;
    cout << "Enter the 2nd position which you want to add (1 to 5): " << endl;
    cin >> g;

    i = (N / (int)pow(10, f - 1)) % 10;
    j = (N / (int)pow(10, g - 1)) % 10;
    
    h = i + j;
    cout << "Answer = " << h << endl;

    return 0;
}