#include <bits/stdc++.h>
using namespace std;
void sep(long int a, int arr[])
{
    for (int i = 9; i >= 0; i--)
    {
        arr[i] = a % 10;
        a = a / 10;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> n >> k;
        int a[n], max = 0, pos = -1;
        int dig[10];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            sep(a[i], dig);
            int c = 0;
            for (int j = 0; j < 10; j++)
            {
                if (dig[j] == k)
                {

                    c++;
                    if (max < c)
                    {
                        max = c;
                        pos = i;
                    }
                    if (max == c)
                    {
                        if (a[pos] < a[i])
                            pos = i;
                    }
                }
            }
        }
        if (pos != -1)
            cout << a[pos] << "\n";
        else
            cout << "-1"
                 << "\n";
    }
    return 0;
}