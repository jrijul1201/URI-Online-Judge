#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m = *max_element(a, a + n);
        int i = 0;
        for (; i < n; i++)
        {
            if (a[i] == m)
            {
                a[i] = 0;
                break;
            }
        }
        m = *max_element(a, a + n);
        i = 0;
        int ans = 0;
        for (; i < n; i++)
        {
            if (a[i] == m)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}