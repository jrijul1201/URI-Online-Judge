#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int freq[2000] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    for (int i = 0; i < 2000; i++)
    {
        if (freq[i] != 0)
            cout << i << " aparece " << freq[i] << " vez(es)\n";
    }
    return 0;
}