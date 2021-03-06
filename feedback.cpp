#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            switch (arr[i])
            {
            case 1:
                cout << "Rolien"
                     << "\n";
                break;
            case 2:
                cout << "Naej"
                     << "\n";
                break;
            case 3:
                cout << "Elehcim"
                     << "\n";
                break;
            case 4:
                cout << "Odranoel"
                     << "\n";
                break;

            default:
                break;
            }
        }
    }
    return 0;
}