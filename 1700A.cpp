
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
        ll a, b;
        cin >> a >> b;
        ll ans = (b * (b + 1)) / 2;
        for (int i = 2; i <= a; i++)
        {
            ans += (i - 1) * b + b;
        }
        cout << ans << endl;
    }
}