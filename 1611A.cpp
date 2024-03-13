// Author:Sadman kabir
// date:3/13/2024
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

    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        int n = s.size();

        int ans = -1;
        if ((s[n - 1] - '0') % 2 == 0)
        {
            ans = 0;
        }
        else if ((s[0] - '0') % 2 == 0)
        {
            ans = 1;
        }
        else
        {
            bool checker = false;
            for (int i = 0; i < n; i++)
            {
                if ((s[i] - '0') % 2 == 0)
                {
                    checker = true;
                    break;
                }
            }
            if (checker)
            {
                ans = 2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}