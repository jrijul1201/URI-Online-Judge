#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int arr[n], t[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[n];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> t[n];
        }
        int k = n, sum = 0;
        while (k--)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    sum += t[i] + t[i + 1];
                    swap(arr[i], arr[i + 1]);
                    swap(t[i], t[i + 1]);
                }
            }
        }
        cout << sum << "\n";
    }
    return 0;
}