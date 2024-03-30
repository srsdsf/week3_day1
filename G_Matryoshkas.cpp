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
        int a[n+5];
        map<int,int>mp;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a+1,a+n+1);
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            int v=a[i];
            if(mp[a[i]]!=0)
            {
                ans++;
                while(mp[v] > 0)
                {
                    mp[v]--;
                    v++;
                }
            }
        }
        cout<<ans<<endl;
    }
}