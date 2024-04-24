// Author:Sadman kabir
// date:4/24/2024
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
        int n, z;
        cin >> n >> z;
        int x;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            ans = max(ans, (z | x));
        }
        cout << ans << endl;
    }
}
