#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int arr[n];
        char c[n];
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i] >> c[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j] && c[i] != c[j] && arr[j] >= 0 && arr[i] >= 0)
                {
                    b++;
                    arr[i] = -1;
                    arr[j] = -1;
                    break;
                }
            }
        }
        cout << b << "\n";
    }
    return 0;
}