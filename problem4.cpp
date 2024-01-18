#include <bits/stdc++.h>
using namespace std;
void permutation(int i, int n, vector<int> v)
{
    if (i >= n)
    {
        for (auto it : v)
            cout << it << " ";
        return;
    }
    for (int j = i + 1; j < n; j++)
    {
        
        swap(v[i], v[j]);
        permutation(i+1, n, v);
        swap(v[i], v[j]);
    }
    
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    permutation(0, n, v);
}