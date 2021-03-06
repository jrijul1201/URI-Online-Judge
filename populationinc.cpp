#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c = 0;
        double ga, gb;
        cin >> a >> b >> ga >> gb;
        while (a <= b)
        {
            a = a * (100 + ga) / 100;
            b = b * (100 + gb) / 100;
            c++;
            if (c > 100)
                break;
        }
        if (c <= 100)
            cout << c << " anos.\n";
        else
            cout << "Mais de 1 seculo.\n";
    }
    return 0;
}