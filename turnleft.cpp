#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (true)
    {
        cin >> n;
        int ans = 0;
        if (n == 0)
            break;
        char c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            if (c[i] == 'D')
                ans++;
            else
            {
                ans--;
            }
        }
        ans = ans % 4;
        if (ans < 0)
            ans += 4;
        switch (ans)
        {
        case 0:
            cout << "N"
                 << "\n";
            break;
        case 1:
            cout << "L"
                 << "\n";
            break;
        case 2:
            cout << "S"
                 << "\n";
            break;
        case 3:
            cout << "O"
                 << "\n";
            break;

        default:
            break;
        }
    }
    return 0;
}