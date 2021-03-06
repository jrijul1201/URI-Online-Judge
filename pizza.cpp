#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    while (cin >> n)
    {
        cin >> d;
        string date[d];
        int arr[d][n], c, loc = -1, k = 1;
        ;
        for (int i = 0; i < d; i++)
        {
            cin >> date[i];
            c = 0;
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 1)
                    c++;
            }
            if (c == n && k >= 1)
            {
                loc = i;
                k--;
            }
        }
        if (loc == -1)
            cout << "Pizza antes de FdI\n";
        else
            cout << date[loc] << "\n";
    }
    return 0;
}