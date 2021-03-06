#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans;
    cin >> ans;
    int arr[5], c = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if (arr[i] == ans)
            c++;
    }
    cout << c << "\n";
    return 0;
}