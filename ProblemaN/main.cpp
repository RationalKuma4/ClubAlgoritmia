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
        for (int j = 0; j < k; ++j)
        {
            char let;
            float centavos;
            cin >> let >> centavos;
            LetraP nuevaLetra = LetraP(let, centavos);
            letras.push_back(nuevaLetra);
        }

        int m = 0;
        cin >> m;
        for (int j = 0; j <= m; ++j)
        {
            string linea;
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
        cout << total << "$" << "\n";
    }
}