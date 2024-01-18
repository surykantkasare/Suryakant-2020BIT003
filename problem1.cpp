#include<bits/stdc++.h>
using namespace std;
void reverse(string &s)
{
    int i=0;
    int n=s.size();
    for(int i=0;i<n/2;i++)
    {
       char x=s[i];
       s[i]=s[n-i-1];
       s[n-i-1]=x;
    }
}
int main()
{
    string s;
    getline(cin,s);
    reverse(s);
    cout<<s<<endl;
}