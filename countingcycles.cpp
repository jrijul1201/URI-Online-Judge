#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i = 0;
    while (true)
    {
        i++;
        cin >> n;
        if (n == -1)
            break;
        n = n / 2;
        cout << "Experiment " << i << ": " << n << " full cycle(s)\n";
    }
    return 0;
}