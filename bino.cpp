#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int t = 0, th = 0, f = 0, fi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            t++;
        if (arr[i] % 3 == 0)
            th++;
        if (arr[i] % 4 == 0)
            f++;
        if (arr[i] % 5 == 0)
            fi++;
    }
    cout << t << " Multiplo(s) de 2\n"
         << th << " Multiplo(s) de 3\n"
         << f << " Multiplo(s) de 4\n"
         << fi << " Multiplo(s) de 5\n ";
    return 0;
}