#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a = 0, e = 0, h = 0, m = 0, x = 0;
    while (t--)
    {
        string s;
        char n;
        cin >> s >> n;
        switch (n)
        {
        case 'A':
            a++;
            break;
        case 'E':
            e++;
            break;
        case 'H':
            h++;
            break;
        case 'M':
            m++;
            break;
        case 'X':
            x++;
            break;
        default:
            break;
        }
    }
    cout << x << " Hobbit(s)\n"
         << h << " Humano(s)\n"
         << e << " Elfo(s)\n"
         << a << " Anao(s)\n"
         << m << " Mago(s)\n";
    return 0;
}