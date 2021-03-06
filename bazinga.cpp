#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i < t + 1; i++)
    {
        string a, b;
        cin >> a >> b;
        if (a == "tesoura" && b == "papel")
            cout << "Caso #" << i << ": Bazinga!\n";
        else if (a == "papel" && b == "pedra")
            cout << "Caso #" << i << ": Bazinga!\n";
        else if (a == "pedra" && b == "lagarto")
            cout << "Caso #" << i << ": Bazinga!\n";
        else if (a == "lagarto" && b == "Spock")
            cout << "Caso #" << i << ": Bazinga!\n";
        else if (a == "Spock" && b == "tesoura")
            cout << "Caso #" << i << ": Bazinga!\n";
        else if (a == "tesoura" && b == "lagarto")
            cout << "Caso #" << i << ": Bazinga!\n";
        else if (a == "lagarto" && b == "papel")
            cout << "Caso #" << i << ": Bazinga!\n";
        else if (a == "papel" && b == "Spock")
            cout << "Caso #" << i << ": Bazinga!\n";
        else if (a == "Spock" && b == "pedra")
            cout << "Caso #" << i << ": Bazinga!\n";
        else if (a == "pedra" && b == "tesoura")
            cout << "Caso #" << i << ": Bazinga!\n";
        else if (a == b)
            cout << "Caso #" << i << ": De novo!\n";
        else
            cout << "Caso #" << i << ": Raj trapaceou!\n";
    }
    return 0;
}