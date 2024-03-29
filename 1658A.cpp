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
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == '0')
            {
                if (s[i + 1] == '0')
                    cnt += 2;
                else if (s[i + 2] == '0')
                    cnt += 1;
            }
        }
        cout << cnt << endl;
    }
}