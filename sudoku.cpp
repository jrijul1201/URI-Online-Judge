#include <bits/stdc++.h>
using namespace std;
int sum(int r, int c, int arr[9][9], int sr, int sc)
{
    int sum = 0;
    for (int i = sr; i < r; i++)
    {
        for (int j = sc; j < c; j++)
        {
            sum += arr[i][j];
        }
    }
}
int main()
{
    int t, j;
    int arr[9][9];
    cin >> t;
    j = t;
    while (t--)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cin >> arr[i][j];
            }
        }
        int c = 0;
        for (int i = 0; i < 10; i++)
        {
            if (sum(i, 9, arr, i, 0) != 45)
            {
                c++;
                break;
            }
            if (sum(9, i, arr, 0, i) != 45)
            {
                c++;
                break;
            }
        }
        if (sum(3 + 0, 3 + 0, arr, 0, 0) != 45)
        {
            c++;
        }
        if (sum(3 + 3, 3 + 0, arr, 3, 0) != 45)
        {
            c++;
        }
        if (sum(3 + 6, 3 + 0, arr, 6, 0) != 45)
        {
            c++;
        }
        if (sum(3 + 0, 3 + 3, arr, 0, 3) != 45)
        {
            c++;
        }
        if (sum(3 + 3, 3 + 3, arr, 3, 3) != 45)
        {
            c++;
        }
        if (sum(3 + 6, 3 + 3, arr, 6, 3) != 45)
        {
            c++;
        }
        if (sum(3 + 0, 3 + 6, arr, 0, 6) != 45)
        {
            c++;
        }
        if (sum(3 + 3, 3 + 6, arr, 3, 6) != 45)
        {
            c++;
        }
        if (sum(3 + 6, 3 + 6, arr, 6, 6) != 45)
        {
            c++;
        }
        if (c == 0)
            cout << "Instancia " << j - t << "\n"
                 << "SIM\n";
        else
        {
            cout << "Instancia " << j - t << "\n"
                 << "NAO\n";
        }
    }
    return 0;
}