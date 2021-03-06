#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    float rn = 0, cn = 0, sn = 0;
    while (t--)
    {
        int n;
        cin >> n;
        char y;
        cin >> y;
        switch (y)
        {
        case 'R':
            rn += n;
            break;
        case 'S':
            sn += n;
            break;
        case 'C':
            cn += n;
            break;
        default:
            break;
        }
    }
    float tot = 0;
    tot = rn + sn + cn;
    cout << "Total: " << tot << " cobaias\nTotal de coelhos: " << cn << "\nTotal de ratos: " << rn << "\nTotal de sapos: " << sn << "\n";
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << cn * 100 / tot << " %\nPercentual de ratos: " << fixed << setprecision(2) << rn * 100 / tot << " %\nPercentual de sapos: " << fixed << setprecision(2) << sn * 100 / tot << " %\n";
    return 0;
}