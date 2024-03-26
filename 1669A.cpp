// Author:Sadman kabir
// date:3/26/2024
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
        int r;
        cin >> r;

        int res = 1;
        if (r <= 1399)
        {
            res = 4;
        }
        else if (r <= 1599)
        {
            res = 3;
        }
        else if (r <= 1899)
        {
            res = 2;
        }

        cout << "Division " << res << endl;
    }
}
