#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3], tmp[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        tmp[i] = arr[i];
    }
    int t = 3;
    while (t--)
    {
        for (int i = 0; i < 2; i++)
        {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "\n";
    for (int i = 0; i < 3; i++)
    {
        cout << tmp[i] << "\n";
    }
    return 0;
}