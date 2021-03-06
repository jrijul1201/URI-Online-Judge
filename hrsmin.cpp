#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a;
    while (cin >> a)
    {
        int ans = 0;
        for (int h = 0; h < 12; h++)
        {
            for (int m = 0; m < 60; m++)
            {
                float x = (30.00 * h) - (11.00 * m / 2.00);
                if (x < 0)
                    x = -x;
                if (x > 180)
                    x = 360 - x;

                if (x == a)
                {
                    cout << h << " " << m << " ";
                    ans = 1;
                    h = 12;
                    break;
                }
            }
        }
        if (ans == 1)
            cout << "Y\n";
        else
        {
            cout << "N\n";
        }
    }
    return 0;
}