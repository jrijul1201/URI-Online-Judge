#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], y = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            y++;
        else
        {
            y--;
        }
    }
    if (y >= 0)
        cout << "Y\n";
    else
    {
        cout << "N\n";
    }

    return 0;
}