#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int max = 0, pos = 0;
    for (int i = 0; i < 100; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
            pos = i;
        }
    }
    cout << max << "\n"
         << pos+1 << "\n";

    return 0;
}