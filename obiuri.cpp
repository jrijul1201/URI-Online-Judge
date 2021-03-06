#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr[n];
    int l[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        l[i] = arr[i].length();
        if (l[i] == 3)
        {
            if (arr[i][0] == 'U' && arr[i][1] == 'R')
                arr[i][2] = 'I';
            else if (arr[i][0] == 'O' && arr[i][1] == 'B')
                arr[i][2] = 'I';
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}