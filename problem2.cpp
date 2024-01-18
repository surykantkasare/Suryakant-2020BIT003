#include <bits/stdc++.h>
using namespace std;
vector<int> evenVector(int n, vector<int> &v)
{
    vector<int> even;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            even.push_back(v[i]);
        }
    }
    return even;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> even = evenVector(n, v);
    for (auto it : even)
        cout << it << " ";
}