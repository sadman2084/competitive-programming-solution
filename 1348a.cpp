#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, a, d, f, s;
    cin >> t;
    i = 0;
    for (i; i < t; i++)
    {
        cin >> n;
        a = n / 2;
        f = pow(2, n);
        for (int j = 1; j < a; j++)
        {
            f = f + pow(2, j);
        }
        s = 0;
        for (int j = a; j < n; j++)
        {
            s = s + pow(2, j);
        }
        d = f - s;
        cout << d << endl;
    }
}