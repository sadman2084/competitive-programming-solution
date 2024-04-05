// Author:Sadman kabir
// date:4/5/2024
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
        int n;
        cin >> n;
        int mx1 = 0, mx2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mx1 = max(mx1, x);
        }

        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            mx2 = max(mx2, x);
        }

        if (mx1 > mx2)
        {
            cout << "Alice" << endl;
            cout << "Alice" << endl;
        }
        else if (mx2 > mx1)
        {
            cout << "Bob" << endl;
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
            cout << "Bob" << endl;
        }
    }
}