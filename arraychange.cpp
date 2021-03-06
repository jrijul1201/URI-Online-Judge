#include <bits/stdc++.h>
using namespace std;
int main()
{
    float arr[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    int f = 0, l = 19;
    for (int i = 0; i < 10; i++)
    {
        swap(arr[f], arr[l]);
        f++, l--;
    }
    for (int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << arr[i] << "\n";
    }
    return 0;
}