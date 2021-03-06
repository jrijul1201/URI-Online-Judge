#include <bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        while (a != b)
        {
            if (a > b)
                a = a - b;
            else
                b = b - a;
        }
        cout << a << "\n";
    }
    return 0;
}