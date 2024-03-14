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
        string s, u;
        cin >> s >> u;
        long a(0), b(0), c(0);
        for (long p = 0; p < s.size(); p++)
        {
            a += (s[p] == 'a');
            b += (s[p] == 'b');
            c += (s[p] == 'c');
        }

        sort(s.begin(), s.end());
        if (a == 0 || b == 0 || c == 0 || u != "abc")
        {
            std::cout << s << std::endl;
            continue;
        }

        for (long p = 0; p < a; p++)
        {
            cout << "a";
        }
        for (long p = 0; p < c; p++)
        {
            cout << "c";
        }
        for (long p = 0; p < b; p++)
        {
            cout << "b";
        }
        for (long p = 0; p < s.size(); p++)
        {
            if (s[p] > 'c')
            {
                cout << s[p];
            }
        }
        cout << endl;
    }
}