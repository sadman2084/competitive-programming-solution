#include <bits/stdc++.h>
using namespace std;
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int mn, mx;
            mn = min(x, (m + 1) - x);
            mx = max(x, (m + 1) - x);
            if (mp[mn] == 0)
                mp[mn] = 1;
            else
                mp[mx] = 1;
        }
        for (int i = 1; i <= m; i++)
        {
            if (mp[i] == 0)
                cout << "B";
            else
                cout << "A";
        }
        cout << endl;
    }
}
