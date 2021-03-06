#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int x = 0, y = n - 1;
        int arr[n];
        for (int j = 0; j < n; j++, x++, y--)
        {
            fill_n(arr, n, 3);
            arr[x] = 1;
            arr[y] = 2;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i];
            }
            cout << "\n";
        }
    }
    return 0;
}