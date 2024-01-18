#include<bits/stdc++.h>
using namespace std;
int binary_search(int x,int n,vector<int>&v)
{
    int l=0,r=n;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(v[mid]==x) return mid;
        else if(v[mid]<x) l=mid+1;
        else   r=mid-1;
    }
    return -1;
}
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int x;cin>>x;
    int index=binary_search(x,n,v);
    if(index==-1) cout<<"Not Present"<<endl;
    else cout<<index<<endl;


    
}