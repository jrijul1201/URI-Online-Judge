#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    float sum = 0;
    float total = 0;
    while (true)
    {
        cin >> n;
        if (n < 0)
            break;
        sum += n;
        total++;
    }
    float ans;
    ans = sum / total;
    cout << fixed << setprecision(2) << ans << "\n";
    return 0;
}