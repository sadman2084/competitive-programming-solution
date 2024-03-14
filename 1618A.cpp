// Author:Sadman kabir
// date:3/14/2024
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
        int arr[8];
        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];
        }

        cout << arr[0] << " " << arr[1] << " ";
        if (arr[0] + arr[1] != arr[2])
        {
            cout << arr[2] << endl;
        }
        else
        {
            cout << arr[3] << endl;
        }
    }
}