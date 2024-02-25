// Author:Sadman kabir
// date:2/25/2024
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
    int i = 0;
    for (i = 0; i < t; i++)
    {
        ll n;
        cin>>n;
        ll count = 1;
        while (count <= n)
        {
            count = count * 2;
        }
        count = count / 2;
        count--;
        cout << count << nl;
    }
}