#include <iostream>
#include <vector>

using namespace std;

struct Hotel
{
    int PrecioPersona;
    vector<int> CamasDisponiblesFin;

    Hotel(int precioPersona)
    {
        PrecioPersona = precioPersona;
    }
};

int main()
{
    int n, b, h, w;
    while (cin >> n >> b >> h >> w)
    {
        vector<Hotel> hoteles;
        vector<int> preciosFinales;
        int precioFinal = 0;

        for (int i = 0; i < h; ++i)
        {
            int precio;
            cin >> precio;
            Hotel nuevoHotel = Hotel(precio);

            for (int j = 0; j < w; ++j)
            {
                int camasDisponibles;
                cin >> camasDisponibles;
                nuevoHotel.CamasDisponiblesFin.push_back(camasDisponibles);
            }
            hoteles.push_back(nuevoHotel);
        }

        for (Hotel hotel:hoteles)
        {
            if (b < hotel.PrecioPersona * n) continue;
            for (int camasDisponibles: hotel.CamasDisponiblesFin)
            {
                if (n > camasDisponibles) continue;
                preciosFinales.push_back(n * hotel.PrecioPersona);
                break;
            }
        }

        if (preciosFinales.size() > 0)
        {
            precioFinal = preciosFinales[0];
            for (int precio:preciosFinales)
                precioFinal = min(precioFinal, precio);
        }

        if (precioFinal > 0) cout << precioFinal << "\n";
        else cout << "stay home" << "\n";

    }
    return 0;
}