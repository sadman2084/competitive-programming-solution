// Author:Sadman kabir
// date:3/17/2024
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
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < 0)
            {
                x = -x;
            }
            mp[x]++;
        }
        int count = 0;
        for (auto it : mp)
        {
            if (it.first == 0)
            {
                count += 1;
            }
            else if (it.second >= 2)
            {
                count += 2;
            }
            else
            {
                count += 1;
            }
        }
        cout << count << endl;
    }
}