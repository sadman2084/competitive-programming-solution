#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e, f, g, h, i;
    cin >> a;
    int ans[a];
    for (b = 0; b < a; b++)
    {
        ans[b] = 0;
        cin >> c;
        if(c<10)
        {
            ans[b] =c;
        }
        if (c >= 10)
        {
            g = c;
            h = 0;
            i = 0;
            while (g > 0)
            {
                g = g / 10;
                h = h + 1;
            }
            ans[b] = 9 * (h - 1);
            for (f = 0; f < h; f++)
            {
                i = pow(10, f) + i;
            }
            ans[b] = ans[b] + c / i;
        }
    }
    for (b = 0; b < a; b++)
    {
        cout << ans[b];
        if (b < a - 1)
        {
            cout << "\n";
        }
    }
}