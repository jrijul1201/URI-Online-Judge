#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    cout << "A = " << arr[0] << ", B = " << arr[1] << ", C = " << arr[2] << "\n";
    cout << "A = " << arr[1] << ", B = " << arr[2] << ", C = " << arr[0] << "\n";
    cout << "A = " << arr[2] << ", B = " << arr[0] << ", C = " << arr[1] << "\n";
    return 0;
}