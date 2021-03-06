#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int h, max = 0;
    while (true)
    {
       
        cin >> h;
         max = h;
        if (h == 0)
            break;

        while (h != 1)
        {
            if (h % 2 == 0)
                h = h / 2;
            else
            {
                h = 3 * h + 1;
            }
            if (h > max)
                max = h;
        }
        cout << max << "\n";
    }
    return 0;
}