#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c, d, e = -1;
    cin >> a >> b >> c >> d;

    float med;
    med = (a * 2 + b * 3 + c * 4 + d) / 10;
    cout << "Media: " << fixed << setprecision(1) << med << "\n";
    if (med >= 7.0)
        cout << "Aluno aprovado.\n";
    if (med <= 6.9 && med >= 5.0)
        cout << "Aluno em exame.\n";
    if (med < 5.0)
        cout << "Aluno reprovado.\n";
    cin >> e;
    if (e != -1)
    {
        float medf;
        medf = (med + e) / 2;
        cout << "Nota do exame: " << e << "\n";
        if (medf >= 5.0)
            cout << "Aluno aprovado.\n";
        if (medf < 5.0)
            cout << "Aluno reprovado.\n";
        cout << "Media final: " << medf << "\n";
    }

    return 0;
}