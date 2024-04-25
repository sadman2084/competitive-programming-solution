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
        int x;
        cin >> x;
        map<int, int> mp;
        int a, b, c;
        cin >> a >> b >> c;
        mp[1] = a;
        mp[2] = b;
        mp[3] = c;
        int ans = 0;
        for (int i = 1; i < 3; i++)
        {
            if (mp[x] == 0)
            {
                ans = 1;
                break;
            }
            x = mp[x];
        }
        if (ans == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}