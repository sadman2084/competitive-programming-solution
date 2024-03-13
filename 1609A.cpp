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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        ll count = 0;
        ll ans = 0;
        ll maxi = 0;

        for (int i = 0; i < n; i++)
        {
            while (arr[i] % 2 == 0)
            {
                count++;
                arr[i] /= 2;
            }
            ans += arr[i];
            maxi = max(maxi, arr[i]);
        }
        ll y = maxi;
        for (int i = 1; i <= count; i++)
        {
            y = y * 2;
        }
        ans += y;
        ans -= maxi;
        cout << ans << endl;
    }
}
