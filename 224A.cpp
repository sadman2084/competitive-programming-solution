#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, b, h, x, y, z;
    cin >> x>> y>> z;
    l = sqrt((x * z) / y);
    h = sqrt((y * z) / x);
    b = sqrt((x * y) / z);
    int area = 4 * (l + b + h);
    cout << area << endl;
}