// Author:Sadman kabir
// date:3/9/2024
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
        string s;
        cin >> s;
        int ab = 0, ba = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                ab++;
            }
            else if (s[i] == 'b' && s[i + 1] == 'a')
            {
                ba++;
            }
        }
        if (ab == ba)
        {
            cout << s << endl;
        }
        else if (ab > ba)
        {
            s[0] = 'b';
            cout << s << endl;
        }
        else
        {
            s[0] = 'a';
            cout << s << endl;
        }
    }
}