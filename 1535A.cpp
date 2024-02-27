// Author:Sadman kabir
// date:
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
    ll a, b, c, d;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        ll mx1 = max(a, b);
        ll mx2 = max(c, d);
        ll mn1 = min(a, b);
        ll mn2 = min(c, d);
        if (mx1 > mn2 && mx2 > mn1)
        {
            YES;
        }
        else
        {
            NO;
        }
    }
}