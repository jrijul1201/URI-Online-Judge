#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long r;
    int p;
    while (cin >> r)
    {
        cin >> p;
        int arr[4] = {0}, s = 0;
        for (int i = 0; i < 4; i++)
        {
            arr[i] = r % 1000;
            r = r / 1000;
            s++;
            if (r == 0)
                break;
        }
        cout << "$";
        for (int i = s - 1; i >= 0; i--)
        {
            if (i != s - 1)
            {
                if (arr[i] >= 100)
                    cout << arr[i];
                else if (arr[i] < 10)
                    cout << "00" << arr[i];
                else
                    cout << "0" << arr[i];
            }
            else
                cout << arr[i];
            if (i > 0)
                cout << ",";
            else
                cout << ".";
        }
        if (p >= 10)
            cout << p << "\n";
        else
            cout << "0" << p << "\n";
    }
    return 0;
}