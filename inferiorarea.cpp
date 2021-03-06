#include <bits/stdc++.h>

using namespace std;

int main()
{
    double M[12][12], sum = 0;
    char o;
    cin >> o;
    //input matrix
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }
    //operation
    for (int i = 5; i < 7; i++)
        sum = sum + M[7][i];
    for (int i = 4; i < 8; i++)
        sum = sum + M[8][i];
    for (int i = 3; i < 9; i++)
        sum = sum + M[9][i];
    for (int i = 2; i < 10; i++)
        sum = sum + M[10][i];
    for (int i = 1; i < 11; i++)
        sum = sum + M[11][i];
    if (o == 'S')
        cout << fixed << setprecision(1) << sum<<"\n";
    if (o == 'M')
        cout << fixed << setprecision(1) << (sum / 30)<<"\n";


return 0;
}