#include <bits/stdc++.h>
using namespace std;
int seven(int a)
{
    int n = a;
    int p;
    for (int i = 1; i < 5; i++)
    {
        p = pow(10, i - 1);
        if (a % 10 == 7)
        {
            n = n - (p * 7);
        }
        a = a / 10;
    }
    return n;
}
int main()
{
    int a, b;
    char c;
    int ans = 0;
    cin >> a >> c >> b;
    a = seven(a);
    b = seven(b);
    switch (c)
    {
    case '+':
        ans = a + b;
        break;
    case 'x':
        ans = a * b;
        break;
    default:
        break;
    }
    ans = seven(ans);

    cout << ans << "\n";

    return 0;
}