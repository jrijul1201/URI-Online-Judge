#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a)
    {
        cin >> b;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        int m;
        while (b--)
        {
            sort(arr, arr + a);
            ans += arr[a - 1];
            arr[a - 1] = 0;
        }
        cout << ans << "\n";
    }
    return 0;
}