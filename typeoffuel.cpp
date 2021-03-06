#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a = 0, g = 0, d = 0;

    while (true)
    {
        cin >> n;
        if (n == 4)
            break;
        switch (n)
        {
        case 1:
            a++;
            break;
        case 2:
            g++;
            break;
        case 3:
            d++;
            break;
        default:
            break;
        }
    }

    cout << "MUITO OBRIGADO\nAlcool: " << a << "\nGasolina: " << g << "\nDiesel: " << d << "\n";
    return 0;
}