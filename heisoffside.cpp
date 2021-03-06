#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, d;
    while (true)
    {
        cin >> a >> d;
        if (a == 0 && d == 0)
            break;
        int at[a], de[d];
        for (int i = 0; i < a; i++)
        {
            cin >> at[i];
        }
        for (int i = 0; i < d; i++)
        {
            cin >> de[i];
        }
        int off = 0;
        sort(de, de + d);
        for (int i = 0; i < a; i++)
        {
            if (at[i] < de[1])
            {
                off++;
                break;
            }
        }
        if (off == 1)
            cout << "Y\n";
        else
        {
            cout << "N\n";
        }
    }
    return 0;
}