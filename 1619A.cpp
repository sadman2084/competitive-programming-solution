// Author:Sadman kabir
// date:3/15/2024
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
        ll n;
        cin >> n;
        set<ll> s;
        ll i = 1;
        while (i * i <= n)
        {
            s.insert(i * i);
            i++;
        }
        i = 1;
        while (i * i * i <= n)
        {
            s.insert(i * i * i);
            i++;
        }
        cout << s.size() << endl;
    }
}