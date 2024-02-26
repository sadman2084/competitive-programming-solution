#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int N = 1e4 + 10;
    int n, m, a[N], k;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int j = 0; j < m; j++)
    {
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            if (k % a[i] == 0)
            {
                v.push_back(k / a[i]);
            }
        }
    }
    int ma = *max_element(v.begin(), v.end());
    cout << count(v.begin(), v.end(), ma);
}
