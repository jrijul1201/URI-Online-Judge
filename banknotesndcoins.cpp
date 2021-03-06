#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin >> n;
    int hun = 0, fif = 0, twe = 0, ten = 0, five = 0, two = 0, one = 0, p50 = 0, p25 = 0, p10 = 0, p5 = 0, p1 = 0;
    hun = n / 100.00;
    n = n - (hun * 100.00);
    fif = n / 50.00;
    n = n - (fif * 50.00);
    twe = n / 20.00;
    n = n - (twe * 20.00);
    ten = n / 10.00;
    n = n - (ten * 10.00);
    five = n / 5.00;
    n = n - (five * 5.00);
    two = n / 2.00;
    n = n - (two * 2.00);
    one = n / 1.00;
    n = n - (one * 1.00);
    p50 = n / 0.50;
    n = n - (p50 * 0.50);
    p25 = n / 0.25;
    n = n - (p25 * 0.25);
    p10 = n / 0.10;
    n = n - (p10 * 0.10);
    p5 = n / 0.05;
    n = n - (p5 * 0.05);
    p1 = n / 0.01;
    n = n - (p1 * 0.01);
    cout << "NOTAS:\n";
    cout << hun << " nota(s) de R$ 100.00\n";
    cout << fif << " nota(s) de R$ 50.00\n";
    cout << twe << " nota(s) de R$ 20.00\n";
    cout << ten << " nota(s) de R$ 10.00\n";
    cout << five << " nota(s) de R$ 5.00\n";
    cout << two << " nota(s) de R$ 2.00\n";
    cout << "MOEDAS:\n";
    cout << one << " moeda(s) de R$ 1.00\n";
    cout << p50 << " moeda(s) de R$ 0.50\n";
    cout << p25 << " moeda(s) de R$ 0.25\n";
    cout << p10 << " moeda(s) de R$ 0.10\n";
    cout << p5 << " moeda(s) de R$ 0.05\n";
    cout << p1 << " moeda(s) de R$ 0.01\n";
    return 0;
}
