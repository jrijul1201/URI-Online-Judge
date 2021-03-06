#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s[n], ori[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        ori[i] = s[i];
    }
    int i = 0;
    while (i > -1 && i < n)
    {
        int tmp = s[i];
        if (s[i] > 0)
        {
            s[i]--;
        }
        if (tmp % 2 == 0)
            i--;
        else
            i++;
    }
    int sum = 0, c = 0;
    for (int j = 0; j < n; j++)
    {
        sum += s[j];
        if (s[j] != ori[j])
            c++;
    }
    cout << c << " " << sum <<"\n";
    return 0;
}