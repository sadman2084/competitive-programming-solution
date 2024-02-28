// Author:Sadman kabir
// date:2/28/2024
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
    int t, i, n;
    cin >> t;

    int arr[100];
    while (t--)
    {
        cin >> n;
        ll sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        //ll s = sum / n;
        if (sum == n)
        {
            cout << 0 << endl;
        }
        
        else if (sum > n)
        {
            ll a = sum - n;
            cout << a << endl;
        }
        else if (sum < n)
        {
            cout << 1 << endl;
        }
       
    }
}