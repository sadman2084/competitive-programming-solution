#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    int i;
    cin >> p;
    for (i = 0; i < p.size(); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {

            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}