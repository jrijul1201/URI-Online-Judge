#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[11];
    while (cin >> arr[0])
    {

        char c;
        for (int i = 1; i < 10; i++)
        {
            cin >> arr[i] >> c;
            arr[i] -= 48;
        }
        cin >> arr[10];
        arr[10] -= 48;
        arr[0] -= 48;
        int b1 = 0, b2 = 0;
        for (int i = 1; i < 10; i++)
        {
            b1 += arr[i - 1] * i;
        }
        b1 = b1 % 11;
        if (b1 == 10)
            b1 = 0;
        for (int i = 1; i < 10; i++)
        {
            b2 += arr[10 - i - 1] * i;
        }
        b2 = b2 % 11;
        if (b2 == 10)
            b2 = 0;
        int y = 0;
        if (b1 == arr[9])
            y++;
        if (b2 == arr[10])
            y++;
        if (y == 2)
            cout << "CPF valido\n";
        else
        {
            cout << "CPF invalido\n";
        }
    }
    return 0;
}