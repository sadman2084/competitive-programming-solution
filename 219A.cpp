#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string s;
    cin >> k >> s;
    vector<int> v(26, 0);
    for (auto &c : s)
        v[c - 'a']++;
    string res = "";
    for (int i = 0; i < 26; i++)
    {
        if (v[i] % k != 0)
        {
            cout << "-1";
            return 0;
        }
        else
        {
            int times = v[i] / k;
            while (times--)
            {
                res.push_back('a' + i);
            }
        }
    }
    string old = res;
    while (--k)
        res += old;
    cout << res;
}