#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            cout << "par[" << i << "] = " << arr[i] << "\n";
        else
            cout << "impar[" << i << "] = " << arr[i] << "\n";
    }
}
int main()
{
    int arr[15];
    for (int i = 0; i < 15; i++)
    {
        cin >> arr[i];
    }
    int e = 0, o = 0, par[5], impar[5];
    for (int i = 0; i < 15; i++)
    {
        if (arr[i] % 2 == 0)
        {
            par[e] = arr[i];
            e++;
        }
        else
        {
            impar[o] = arr[i];
            o++;
        }
        if (e == 5)
        {
            e = 0;
            printarr(par, 5);
        }
        if (o == 5)
        {
            o = 0;
            printarr(impar, 5);
        }
    }
    if (o != 0)
    {
        printarr(impar, o);
    }
    if (e != 0)
    {

        printarr(par, e);
    }

    return 0;
}