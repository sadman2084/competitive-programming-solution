// Author:Sadman kabir
// date:4/16/2024
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
        int a, b;
        cin >> a >> b;
        while (a > 0 && b > 0)
        {
            cout << "01";
            a--;
            b--;
        }
        while (a > 0)
        {
            cout << 0;
            a--;
        }
        while (b > 0)
        {
            cout << 1;
            b--;
        }
        cout << endl;
    }
}