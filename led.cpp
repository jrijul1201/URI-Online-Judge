#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string k;
        cin >> k;
        long int led = 0;
        int l = k.length();
        for (int i = 0; i < l; i++)
        {
            switch (k[i])
            {
            case '1':
                led += 2;
                break;
            case '2':
                led += 5;
                break;
            case '3':
                led += 5;
                break;
            case '4':
                led += 4;
                break;
            case '5':
                led += 5;
                break;
            case '6':
                led += 6;
                break;
            case '7':
                led += 3;
                break;
            case '8':
                led += 7;
                break;
            case '9':
                led += 6;
                break;
            case '0':
                led += 6;
                break;

            default:
                break;
            }
        }
        cout << led << " leds\n";
    }
    return 0;
}