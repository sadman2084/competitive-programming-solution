#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num1, num2;
    cin >> num1 >> num2;
    int i = 0;
    for (i; i < num1.size(); i++)
    {
        if (num1[i] == num2[i])
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
    }
}
