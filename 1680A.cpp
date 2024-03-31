// Author:Sadman kabir
// date:3/31/2024
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if (l2 >= l1)
        {
            if (r1 >= l2)
            {
                cout << l2 << endl;
            }
            else
            {
                cout << (l1 + l2) << endl;
            }
        }
        else
        {
            if (r2 >= l1)
            {

                cout << l1 << endl;
            }
            else
            {
                cout << l1 + l2 << endl;
            }
        }
    }
}