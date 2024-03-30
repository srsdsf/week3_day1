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
        string s;
        cin>>s;
        string T="meow";
        for(int i=0; i<n; i++)
        {
            if(s[i] <= 90)
            {
                s[i]+=32;
            }
        }
        string s1="";
        for(int i=0; i<n; i++)
        {
            if(s1.empty() || s1.back()!=s[i])
            {
                s1.push_back(s[i]);
            }
        }
        if(s1==T)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}