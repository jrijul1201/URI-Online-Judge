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
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[(i + 1) % n] && a[(i + 1) % n] < a[(i + 2) % n])
                p++;
            if (a[i] < a[(i + 1) % n] && a[(i + 1) % n] > a[(i + 2) % n])
                p++;
        }
        cout << p << "\n";
    }
    return 0;
}