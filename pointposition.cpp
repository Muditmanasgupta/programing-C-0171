#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, r, h, k;
    double d;
    cout << "Enter the coordinates of the point (x,y): " << endl;
    cin >> x >> y ;
    cout << "The coordinates of the point are: (" << x << ", " << y << ")" << endl;
    cout << "Radius of the circle: " << endl;
    cin >> r ;
    cout << "The radius is: " << r << endl;
    cout << "coordinate of center of circle: " << endl;
    cin >> h >> k ;
    cout << "The coordinates of the center are: (" << h << ", " << k << ")" << endl;

    d = sqrt((pow(x - h, 2) + pow(y - k, 2)));
    (d < r) ? cout << "The point is inside the circle." << endl :(d > r) ? cout << "The point is outside the circle." << endl : cout << "The point is on the circle." << endl;

    return 0;
}