// Author: Sadman Kabir
// Date:
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

bool first(vector<string> v)
{
    ll n = v.size();
    ll m = v[0].length();
    ll i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (v[i][j] != '.')
            {
                if ((i + j) % 2 == 0 && v[i][j] != 'R')
                {
                    return false;
                }
                else if ((i + j) % 2 == 1 && v[i][j] != 'W')
                {
                    return false;
                }
            }
        }
    }

    return true;
}

bool second(vector<string> v)
{
    ll n = v.size();
    ll m = v[0].length();
    ll i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (v[i][j] != '.')
            {
                if ((i + j) % 2 == 0 && v[i][j] != 'W')
                {
                    return false;
                }
                else if ((i + j) % 2 == 1 && v[i][j] != 'R')
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll i, j, n, m;
        cin >> n >> m;
        vector<string> v;
        for (i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        if (first(v))
        {
            cout << "YES" << endl;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if ((i + j) % 2 == 0)
                    {
                        cout << 'R';
                    }
                    else
                        cout << 'W';
                }
                cout << endl;
            }
        }

        else if (second(v))
        {
            cout << "YES" << endl;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if ((i + j) % 2 == 0)
                    {
                        cout << 'W';
                    }
                    else
                        cout << 'R';
                }
                cout << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
