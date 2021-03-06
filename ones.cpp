#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        long long i = 1;
        int j = 1;
        while (true)
        {
            cout << i << " " << (pow(10.00, j)) << " ";
            i = i + (int)(pow(10.00, j));

            if (i % n == 0 && i >= n)
            {
                cout << i << " ";

                break;
            }
            j++;
        }
        cout << j << "\n";
    }

    return 0;
}