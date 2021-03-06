#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while (cin >> t)
    {

        int arr[t];
        for (int i = 0; i < t; i++)
        {
            cin >> arr[i];
        }
        int a = *max_element(arr, arr + t);
        if (a < 10)
            cout << "1"
                 << "\n";
        if (a >= 20)
            cout << "3"
                 << "\n";
        if (a >= 10 && a < 20)
            cout << "2"
                 << "\n";
    }
    return 0;
}