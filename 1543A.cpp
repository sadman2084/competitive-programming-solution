// Author:Sadman kabir
// date:3/1/2024
//-------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define No cout << "No" << endl
#define Yes cout << "Yes" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define mm cout << "-1" << endl
#define nl "\n"
#define rr return
#define ll long long int
//----------------------------------------------------------------
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0"
                 << " "
                 << "0" << endl;
        }
        else
        {
            ll diff = abs(a - b);
            ll x = a % diff;
            ll y = b % diff;
            if (x == y)
            {
                ll z = min(diff - x, x);
                cout << diff << " " << z << endl;
            }
        }
    }
}