#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 1;
    while (true)
    {
        cin >> n;
        int a=1;
        if (n == 0)
            break;
        if (n % 2 != 0)
        for(int i = 0; i < n/2; i++)
        {
           for(int i = 0; i < n; i++)
           {
               cout<<a<<" ";
           }
                     
        }
    }
    return 0;
}