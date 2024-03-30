#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        ll ans=0,sum,x,y;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                sum=a[i][j];
                x=j-1;
                y=j+1;
                for(ll k=i-1; k>=0; k--)
                {
                    if(x>=0)
                    {
                        sum+=a[k][x];
                        x--;
                    }
                    if(y<m)
                    {
                        sum+=a[k][y];
                        y++;
                    }
                }
                x=j-1;
                y=j+1;
                for(ll k=i+1; k<n; k++)
                {
                    if(x>=0)
                    {
                        sum+=a[k][x];
                        x--;
                    }
                    if(y<m)
                    {
                        sum+=a[k][y];
                        y++;
                    }
                }
                if(sum>ans) ans=sum;
            }
        }
        cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}