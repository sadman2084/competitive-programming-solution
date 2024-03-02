// Author:Sadman kabir
// date:2/3/2024
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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = 1;
        int count = 0;
        int sum = 0;
        while (sum < n)
        {
            count++;
            sum = sum + i;
            i = i + 2;
        }
        cout << count << "\n";
    }
}
