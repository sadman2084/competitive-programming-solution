#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int ar[n + 3];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += ar[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int sum1 = sum - ar[i];
            int x = ar[i];
            int y = n - 1;
            if (sum1 % y == 0 && sum1 / y == x)
                ans = 1;
        }
        if (ans == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
