#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int n, m, k;
        cin >> n >> m >> k;
        int x;
        int count = 0;
        vector<int> arr1;
        vector<int> arr2;
        vector<int> arr3;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x <= k)
            {
                arr1.push_back(x);
            }
            else
            {
                continue;
            }
        }
        for (int i = 0; i < m; i++)
        {

            cin >> x;
            if (x <= k)
            {
                arr2.push_back(x);
            }
            else
            {
                continue;
            }
        }

        int a = arr1.size();
        int b = arr2.size();
        // int result = a * b;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (arr1[i] + arr2[j] <= k)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
}