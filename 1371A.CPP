#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << "\n";
        }
        else
        {
            cout << (n + 1) / 2 << "\n";
        }
    }
}