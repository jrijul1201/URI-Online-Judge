#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string k;
        cin >> k;
        int s;
        cin >> s;
        int l = k.length();
        for (int i = 0; i < l; i++)
        {
            k[i] = k[i] - s;
            if (k[i] > 91)
                k[i] = k[i] - 26;
            else if (k[i] < 65)
                k[i] = k[i] + 26;
        }
        cout << k << "\n";
    }
    return 0;
}