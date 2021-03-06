#include <bits/stdc++.h>
using namespace std;
int main()
{
    float sum = 1;
    for (float i = 3, j = 2; i < 40; i += 2, j *= 2)
    {
        sum += (i / j);
    }
    cout << fixed << setprecision(2) << sum << "\n";
    return 0;
}