#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n;
        if(n==1)cout<<3<<endl;
        else if(n%2==1)cout<<1<<endl;
        else
        {
            int ans=1;
            for(int i=0;i<31;i++)
            {
                if((n&1)==1)
                {
                    ans=pow(2,i);
                    break;
                }
                else
                {
                    ans=pow(2,i);
                }
                n=(n>>1);
            }
            if(ans==x)ans++;
            cout<<ans<<endl;
        }
   
