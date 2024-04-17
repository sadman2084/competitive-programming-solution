// Author:Sadman kabir
// date:4/17/2024
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
        int mx = INT_MIN;
        int a, b;
        int n, m;
        cin >> n >> m;
        int ar[n + 3][m + 4];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> ar[i][j];
                if (ar[i][j] > mx)
                {
                    mx = ar[i][j];
                    a = i;
                    b = j;
                }
            }
        }
        int x, y;
        x = max(a, (n - a) + 1);
        y = max(b, (m - b) + 1);
        cout << x * y << endl;
    }
}
