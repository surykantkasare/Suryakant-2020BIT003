#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    map<string,int>mp;
    int n=s.size();
    string temp="";
    for(int i=0;i<n;i++)
    {
       if(s[i]==' ' and temp.size())
       {
         mp[temp]++;
         temp="";
       }
       else temp+=s[i];
    }
    if(temp.size()) mp[temp]++;
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}