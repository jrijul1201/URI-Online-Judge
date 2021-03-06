#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        float a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                sum++;
        }
        float min;
        min = 2.00 * n / 3.00;
        if (sum >= min)
            cout << "impeachment\n";
        else
            cout << "acusacao arquivada\n";
    }
    return 0;
}