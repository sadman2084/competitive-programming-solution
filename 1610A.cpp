// Author:Sadman kabir
// date:
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
        ll a, b;
        cin>>a >> b;
        if (a == 1 && b == 1)
        {
            cout << 0<<endl;
        }
        else if (a == 1 || b == 1)
        {
            cout << 1<<endl;
        }
        else
        {
            cout << 2<<endl;
        }
    }
}