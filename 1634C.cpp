#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int x = n * k;
        if (k == 1)
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n; i++)
                cout << i << endl;
        }
        else
        {
            if (n % 2 == 1)
                cout << "NO" << endl;
            else
            {
                cout << "YES" << endl;
                int e = 2, o = 1;
                for (int i = 1; i <= n; i++)
                {
                    if (i % 2 == 1)
                    {
                        for (int j = 1; j <= k; j++)
                            cout << o << " ", o += 2;
                    }
                    else
                    {
                        for (int j = 1; j <= k; j++)
                            cout << e << " ", e += 2;
                    }
                    cout << endl;
                }
            }
        }
    }
}