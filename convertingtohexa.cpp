#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int dec;
    cin >> dec;
    char hex[10];
    long int rem = 0, quo = dec;
    int i = 0;
    while (quo != 0)
    {
        rem = quo % 16;
        if (rem <= 9)
            hex[i] = rem + 48;
        else
        {
            hex[i] = rem + 55;
        }

        quo = quo / 16;
        i++;
    }
    for (int j = i-1; j >=0; j--)
        cout << hex[j];
    cout << "\n";
    return 0;
}