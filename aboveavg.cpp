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
        int a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sum = sum / n;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > sum)
                c++;
        }
        float per = c * 100.0000 / n;
        cout << fixed << setprecision(3) << per << "%\n";
    }
    return 0;
}