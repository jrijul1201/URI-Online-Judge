#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string k1, k2;
        cin >> k1 >> k2;
        int l1 = k1.length();
        int l2 = k2.length();
        int s = min(l1, l2);
        for (int i = 0; i < s; i++)
        {
            cout << k1[i] << k2[i];
        }
        if (s == l1)
        {
            for (int i = s; i < l2; i++)
            {
                cout << k2[i];
            }
        }
        else
        {
            for (int i = s; i < l1; i++)
            {
                cout << k1[i];
            }
        }
        cout << "\n";
    }
    return 0;
}