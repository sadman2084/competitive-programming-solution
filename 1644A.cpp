#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                mp[s[i]] = 1;
            else
            {
                char z = s[i] + 32;
                if (mp[z] == 0)
                {
                    ans = 1;
                    break;
                }
            }
        }
        if (ans == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
