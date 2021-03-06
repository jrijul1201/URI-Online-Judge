#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int j = 0;
        while (true)
        {
            int bara = a[0];
            int i = 0;
            while (i < n)
            {
                if (bara == a[i])
                {
                    continue;
                    i++;
                }
                else
                    break;
            }
            if (i == n - 1)
            {
                cout << "yes\n";
                break;
            }
            if (j == n)
                j = 0;

            int min;
            min = *min_element(a, a + n);
            for (int h = 0; h < n; h++)
            {
                if (a[h] == min)
                    j = h;
            }
            {
                if (a[j + 1] < a[j - 1])
                {
                    a[j]++;
                    a[j + 1]++;
                }
                else
                {
                    a[j]++;
                    a[j - 1]++;
                }
            }
        }
    }
    return 0;
}