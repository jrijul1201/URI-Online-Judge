#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 1; i < n-1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            ans = i + 2;
            break;
        }
    }sw
    cout << ans << "\n";
    return 0;
}