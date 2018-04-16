#include <iostream>
#include <vector>

using namespace std;

struct LibroRegistros
{
    int mes;
    double porcentaje;

    LibroRegistros(int m, double p)
    {
        mes = m;
        porcentaje = p;
    }
};

struct Diferencias
{
    int mes;
    double diferencia;
    double valorAuto;
    double pago;

    Diferencias(int m, double d, double v, double p)
    {
        mes = m;
        diferencia = d;
        valorAuto = v;
        pago = p;
    }
};

int main()
{
    int meses = 0, registros = 0;
    double pago = 0, prestamo = 0;

    while (cin >> meses >> pago >> prestamo >> registros)
    {
        if (meses < 0) break;
        vector<LibroRegistros> libro;
        for (int i = 0; i < registros; ++i)
        {
            int m;
            double p;
            cin >> m >> p;
            LibroRegistros nuevo = LibroRegistros(m, p);
            libro.push_back(nuevo);
        }

        double valorAuto = prestamo + pago;
        double montoPagado = prestamo;
        double porcentajeDep = 0;
        vector<Diferencias> diff;
        int mes = 0;
        for (int j = 0; j < meses; ++j)
        {
            for (auto registro:libro)
            {
                if (registro.mes == j)
                {
                    porcentajeDep = registro.porcentaje;
                    break;
                }
            }

            if (j > 0) montoPagado -= pago;
            valorAuto -= (valorAuto * porcentajeDep);

            Diferencias dif = Diferencias(j, abs(valorAuto - montoPagado), valorAuto, montoPagado);
            diff.push_back(dif);
        }

        double minDif = diff[0].diferencia;
        for (auto d:diff)
            minDif = min(minDif, d.diferencia);

        for (auto d:diff)
        {
            if (minDif == d.diferencia)
                mes = d.mes;
        }

        if (mes > 1) cout << mes << " months" << "\n";
        else cout << mes << " month" << "\n";
    }
    return 0;
}