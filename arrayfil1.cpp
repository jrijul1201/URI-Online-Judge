#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    int k;
    cin >> k;
    for (int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << k * pow(2, i) << "\n";
    }
    return 0;
}