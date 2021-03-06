#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 1, y = 1;
    while (x > 0 && y > 0)
    {
        int tmp;
        cin >> x >> y;
        if (x > 0 && y > 0)
        {
            if (x > y)
            {
                tmp = x;
                x = y;
                y = tmp;
            }
            int sum = 0;
            for (int i = x; i <= y; i++)
            {
                sum += i;
                cout << i << " ";
            }
            cout << "Sum=" << sum << "\n";
        }
    }
    return 0;
}