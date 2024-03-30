#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+5;
string a[N];
bool ans[N];
int n;
void solve()
{
    cin>>n;
    set<string>st;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        st.insert(a[i]);
        ans[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<a[i].size(); j++)
        {
            string s1="";
            string s2="";
            for(int k=0; k<j; k++)
            {
                s1+=a[i][k];
            }
            for(int k=j; k<a[i].size(); k++)
            {
                s2+=a[i][k];
            }
            if(st.find(s1)!=st.end() && st.find(s2)!=st.end())
            {
                ans[i]=1;
                break;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<ans[i]; 
    }
    cout<<endl;
}
int8_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}