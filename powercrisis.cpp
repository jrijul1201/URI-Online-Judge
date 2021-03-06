#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 1] = {1};
    int m = 1;
    for (; m < n; m++)
    {
        arr[1] = 0;
        int i = 1;
       
        while (arr[13] != 0)
        {
            int c = 0;
             i++;
            while (c != m)
            {
                if (arr[i] == 1)
                {
                    c++;
                }
                i++;
            }
            arr[i] = 0;
        }
        if (i == 13)
            break;
    }
    cout << m << "\n";
    return 0;
}