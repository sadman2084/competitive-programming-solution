// Author:Sadman kabir
// date:4/7/2024
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        ans++;
        char ch = s[s.size() / 2];

        int i = s.size() / 2 + 1;
        while (i < s.size() && s[i] == ch)
            ans++, i++;

        i = s.size() / 2 - 1;
        while (i >= 0 && s[i] == ch)
            ans++, i--;

        cout << ans << endl;
    }
}