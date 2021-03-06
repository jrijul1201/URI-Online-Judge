#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 10)
                cout << "000" << arr[i] << "\n";
            else if (arr[i] < 100)
                cout << "00" << arr[i] << "\n";
            else if (arr[i] < 1000)
                cout << "0" << arr[i] << "\n";
            else
                cout << arr[i] << "\n";
        }
    }
    return 0;
}