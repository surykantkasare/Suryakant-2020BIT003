#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n,string s)
{
    // remove  spaces and capitalizaations
    string st="";
    for(int i=0;i<n;i++)
    {
        char x=s[i];
         if(s[i]==' ')
         {
            continue;
         }
         else if(s[i]>='A' and s[i]<='Z') 
         {
              x-='A';
              x+='a';
         }
         st+=x;
    }
    int l=0,r=st.size()-1;
    while(l<=r)
    {
         if(st[l]!=st[r]) return false;
         else {l++,r--;}
    }
    return true;
}
int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
    if(palindrome(n,s))
    {
         cout<<"True"<<endl;
    }
    else cout<<"False"<<endl;

}