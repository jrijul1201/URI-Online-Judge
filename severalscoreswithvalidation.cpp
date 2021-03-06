#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    int c = 0;
    int o = 1;
    float med = 0;
    while (o == 1)
    {
        c = 0;
        med = 0;
        while (c != 2)
        {
            cin >> n;
            while (n < 0.0 || n > 10.0)
            {
                cout << "nota invalida\n";
                cin >> n;
            }
            c++;
            med += n;
        }
        med = med / 2.000;
        cout << "media = " << fixed << setprecision(2) << med << "\n";
        o = 0;
        while (o != 1 && o != 2)
        {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> o;
        }
    }
    return 0;
}