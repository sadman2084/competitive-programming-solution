#include <bits/stdc++.h>
using namespace std;
int main()
{
    string arr1;
    string arr2;
    cin >> arr1 >> arr2;
    int i;
    for (i = 0; i < arr1.size(); i++)
    {
        arr1[i] = tolower(arr1[i]);
        arr2[i] = tolower(arr2[i]);
    }
    if (arr1 == arr2)
    {
        cout << "0\n";
    }
    else

    {
        for (i = 0; i < arr1.size(); i++)
        {
            if (arr1[i] < arr2[i])
            {
                cout << "-1\n";
                break;
            }
            else if (arr1[i] > arr2[i])
            {
                cout << "1\n";
                break;
            }
        }
    }
}