#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> st(n);
    for (int i = 0; i < n; i++)
        cin >> st[i];
    int size = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int sz = st[i].size();
        size = min(size, sz);
    }
    if (n == 1)
    {
        cout << st[0] << endl;
    }
    else
    {
        string ans = "";
        cout << size << endl;
        for (int i = 0; i < size; i++)
        {
            bool flag = 0;

            for (int j = 1; j < n; j++)
            {
                if (st[j][i] != st[j - 1][i])
                    flag = 1;
            }
            if (flag)
                break;
            ans += st[0][i];
        }
        cout << ans << endl;
    }
}