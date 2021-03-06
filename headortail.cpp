#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        int arr[n];
        int m = 0, j = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                j++;
            if (arr[i] == 0)
                m++;
        }
        cout << "Mary won " << m << " times and John won " << j << " times\n";
    }
    return 0;
}