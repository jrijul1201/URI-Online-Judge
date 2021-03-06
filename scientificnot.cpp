#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin >> n;
    int i = 0;
    if (n > 0)
    {
        if (n >= 10)
        {
            while (n >= 10)
            {
                n = n / 10;
                i++;
            }
            cout << fixed << setprecision(4) << "+" << n << "E+";
            if (i >= 10)
                cout << i << "\n";
            else
                cout << "0" << i << "\n";
        }
        else if (n < 10 && n >= 1)
        {
            cout << fixed << setprecision(4) << "+" << n << "E+";

            cout << "00"
                 << "\n";
        }
        else if (n < 1)
        {
            while (n < 1)
            {
                n = n * 10;
                i++;
            }
            cout << fixed << setprecision(4) << "+" << n << "E-";
            if (i >= 10)
                cout << i << "\n";
            else
                cout << "0" << i << "\n";
        }
    }
    else if (n == 0)
    {
        cout << fixed << setprecision(4) << "+" << n << "E+";
        cout << "00"
             << "\n";
    }
    else if (n < 0)
    {
        n = 0 - n;
        if (n >= 10)
        {
            while (n >= 10)
            {
                n = n / 10;
                i++;
            }
            cout << fixed << setprecision(4) << "-" << n << "E+";
            if (i >= 10)
                cout << i << "\n";
            else
                cout << "0" << i << "\n";
        }
        else if (n < 10 && n >= 1)
        {
            cout << fixed << setprecision(4) << "-" << n << "E+";
            cout << "00"
                 << "\n";
        }
        else if (n < 1)
        {
            while (n < 1)
            {
                n = n * 10;
                i++;
            }
            cout << fixed << setprecision(4) << "-" << n << "E-";
            if (i >= 10)
                cout << i << "\n";
            else
                cout << "0" << i << "\n";
        }
    }
    return 0;
}