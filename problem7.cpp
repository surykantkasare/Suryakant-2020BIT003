#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    map<char,int>mp;
    int i=0,j=0;
    int n=s.size();
    int mx=0;
    for(int i=0;i<n;i++)
    {
       mp[s[i]]++;
       while(mp[s[i]]>1) 
       {
        mp[s[j]]--;
        j++;
       }
       mx=max(i-j+1,mx);
    }
    cout<<mx<<endl;

}