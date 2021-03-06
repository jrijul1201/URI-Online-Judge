#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> e, o;
    while (t--)
    {
        int k;
        cin >> k;
        if (k % 2 == 0)
            e.push_back(k);
        else
        {
            o.push_back(k);
        }
    }
    sort(e.begin(), e.end());
    sort(o.begin(), o.end(), greater<int>());
    int x;
    for (auto x : e)
    {
        cout << x << "\n";
    }
    for (auto x : o)
    {
        cout << x << "\n";
    }

    return 0;
}