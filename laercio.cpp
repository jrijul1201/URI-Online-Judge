#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                arr[i] = 0;
                c++;
            }
        }
        sort(arr, arr + n);
        int l = c, r = n - 1;
        if (l > r)
            cout << "\n";
        while (l <= r)
        {
            if (l != r && (l + 1) <= (r - 1))
                cout << arr[r] << " " << arr[l] << " ";
            else if (l != r && (l + 1) > (r - 1))
                cout << arr[r] << " " << arr[l] << "\n";
            else
                cout << arr[r] << "\n";
            l++, r--;
        }
    }
    return 0;
}