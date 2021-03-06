#include <bits/stdc++.h>
using namespace std;
int main()
{
    float sum = 0;
    for (float i = 1; i < 101; i++)
    {
        sum += (1.00 / i);
    }
    cout << fixed << setprecision(2) << sum << "\n";
    return 0;
}