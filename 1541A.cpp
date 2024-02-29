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
    int arr[100];
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            // cin >> arr[i];
            arr[i] = i;
        }

        if (n % 2 == 0)
        {
            for (int i = 1; i <= n; i = i + 2)
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        else
        {
            for (int i = 1; i <= n - 3; i = i + 2)
            {
                swap(arr[i], arr[i + 1]);
            }

            swap(arr[n - 2], arr[n - 1]);
            swap(arr[n - 1], arr[n]);
        }

        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}