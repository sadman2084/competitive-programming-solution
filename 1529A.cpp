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
    ll t;
    cin >> t;
    int i;
    for (i = 0; i < t; i++)
    {
        ll n;
        cin >> n;
        ll avg = 0;
        ll arr[n + 3];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + n);
        avg = arr[0];
        int count = 1;
        for (int k = 1; k < n; k++)
        {
            if (avg == arr[k])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << n - count << endl;
    }
}