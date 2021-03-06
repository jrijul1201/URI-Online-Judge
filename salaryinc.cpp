#include <bits/stdc++.h>
using namespace std;
int main()
{
    float sal, inc, newsal;
    float p;
    cin >> sal;
    if (sal >= 0 && sal <= 400.00)
        p = 0.15;
    if (sal >= 400.01 && sal <= 800.00)
        p = 0.12;
    if (sal >= 800.01 && sal <= 1200.00)
        p = 0.10;
    if (sal >= 1200.01 && sal <= 2000.00)
        p = 0.07;
    if (sal > 2000)
        p = 0.04;
    newsal = (p + 1) * sal;
    inc = p * sal;
    cout << fixed << setprecision(2) << "Novo salario: " << newsal << "\nReajuste ganho: " << inc << "\nEm percentual: ";
    cout << fixed << setprecision(0) << p * 100 << " %\n";
    return 0;
}