#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, R;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;


    if (((x * x) + (y - R) * (y - R) <= R*R) || ((x * x) + (y + R) * (y + R) <= R * R))
        cout << "YES";
    else
        cout << "NO";

    cin.get();
    return 0;
}