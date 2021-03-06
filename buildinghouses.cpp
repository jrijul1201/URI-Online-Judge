#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {
        int a, b, c;
        cin >> a;
        if (a == 0)
            break;
        cin >> b >> c;
        float area;
        area = a * b * 100.00 / c;
        int s;
        s = sqrt(area);
        cout << s << "\n";
    }
    return 0;
}