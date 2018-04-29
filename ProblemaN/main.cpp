#include <iostream>
#include <vector>

using namespace std;

struct LetraP
{
    char Letra;
    float Valor;

    LetraP(char letra, float valor)
    {
        Letra = letra;
        Valor = valor;
    }
};

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int k = 0;
        float totalCen = 0;
        vector<LetraP> letras;
        cin >> k;
        char let;
        float centavos;
        for (int j = 0; j < k; ++j)
        {
            cin >> let >> centavos;
            LetraP nuevaLetra = LetraP(let, centavos);
            letras.push_back(nuevaLetra);
        }

        int m = 0;
        cin >> m;
        string linea;
        for (int j = 0; j <= m; ++j)
        {
            getline(cin, linea);
            for (auto c:linea)
            {
                for (auto l:letras)
                {
                    if (c == l.Letra)
                    {
                        totalCen += l.Valor;
                        break;
                    }
                }
            }
        }

        float total = totalCen / 100;
        if (total == 0) cout << "0.00$" << "\n";
        else cout << total << "$" << "\n";
    }
    return 0;
}