#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int a, b, sa = 0, sb = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (a > b)
                sa++;
            else if (a < b)
            {
                sb++;
            }
        }
        cout << sa << " " << sb << "\n";
    }
    return 0;
}