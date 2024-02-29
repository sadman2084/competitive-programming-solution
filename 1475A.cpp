// Author:Sadman kabir
// date:2/29/2024
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
        if ((n & (n - 1)) == 0)
        {
            NO;
        }
        else
        {
            YES;
        }
    }
}