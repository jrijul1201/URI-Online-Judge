#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while (cin >> t)
    {
        float a[t];
        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }

        float x;
        x = *min_element(a, a + t);
        cout << x << "\n";
    }
    return 0;
}