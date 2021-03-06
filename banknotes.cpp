#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin >> n;
    cout << n << "\n";
    int hun = 0, fif = 0, twe = 0, ten = 0, five = 0, two = 0, one = 0;
    hun = n / 100;
    n = n % 100;
    fif = n / 50;
    n = n % 50;
    twe = n / 20;
    n = n % 20;
    ten = n / 10;
    n = n % 10;
    five = n / 5;
    n = n % 5;
    two = n / 2;
    n = n % 2;
    one = n / 1;
    n = n % 1;
    cout << hun << " nota(s) de R$ 100,00\n";
    cout << fif << " nota(s) de R$ 50,00\n";
    cout << twe << " nota(s) de R$ 20,00\n";
    cout << ten << " nota(s) de R$ 10,00\n";
    cout << five << " nota(s) de R$ 5,00\n";
    cout << two << " nota(s) de R$ 2,00\n";
    cout << one << " nota(s) de R$ 1,00\n";
    return 0;
}