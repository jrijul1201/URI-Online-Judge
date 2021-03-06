#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x;
        cin >> x;
        int d = 0;
        while (x > 1)
        {
            x = x / 2;
            d++;
        }
        cout << d << " dias \n";
    }
    return 0;
}