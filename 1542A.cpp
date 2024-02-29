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
    //int arr[101];
    int x;
    while (t--)
    {
        int even = 0;
        int odd = 0;
        int n;
        cin >> n;
        n = n * 2;
        for (int i = 0; i < n; i++)
        {
            //cin >> arr[i];
            cin>>x;
            if (x % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even == odd)
        {
            Yes;
        }
        else
        {
            No;
        }
    }
}