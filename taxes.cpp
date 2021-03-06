#include <bits/stdc++.h>
using namespace std;
int main()
{
    float sal;
    cin >> sal;
    float tax = 0;
    if (sal > 4500)
        tax = ((sal - 4500) * 0.28) + (1500 * 0.18) + (1000 * 0.08);
    else if (sal > 3000)
        tax = ((sal - 3000) * 0.18) + (1000 * 0.08);
    else if (sal > 2000)
        tax = ((sal - 2000) * 0.08);
    if (tax == 0)
        cout << "Isento\n";
    else
        cout << "R$ " << fixed << setprecision(2) << tax << "\n";
    return 0;
}