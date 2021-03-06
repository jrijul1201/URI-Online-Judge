#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int min = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
            min = arr[0];
        if (arr[i] < min)
        {
            min = arr[i];
            k = i;
        }
    }
    cout << "Menor valor: " << min << "\nPosicao: " << k << "\n";
    return 0;
}