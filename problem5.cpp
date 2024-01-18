#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int x;cin>>x;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
       if(mp[x-v[i]])
       {
        cout<<"("<<x-v[i]<<" "<<v[i]<<") ";
       }
       else mp[v[i]]++;
    }
    cout<<endl;
}