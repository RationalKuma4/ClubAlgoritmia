#include <iostream>
#include <vector>

using namespace std;

struct Propuesta
{
    string nombre;
    float precio;
    int ordenAparicion;
    int reqCumplidos;
    vector<string> propuestas;

    Propuesta()
    {

    }

    Propuesta(string n, double p, int o, int r)
    {
        nombre = n;
        precio = p;
        ordenAparicion = o;
        reqCumplidos = r;
    }
};

struct Seleccion
{
    string nombrePropuesta;
    int reqCumplimiento;
    double precio;
    int ordenAparicion;

    Seleccion()
    {}

    Seleccion(string n, int rc, double p, int oa)
    {
        nombrePropuesta = n;
        reqCumplimiento = rc;
        precio = p;
        ordenAparicion = oa;
    }
};

int main()
{
    int numeroReq, numeroPropuestas, numeroPropuesta = 0;;
    while (cin >> numeroPropuestas >> numeroReq)
    {
        if (numeroReq == 0 && numeroPropuestas == 0) break;

        //Requerimientos
        //vector<string> requerimientos;
        for (int i = 0; i < numeroReq; ++i)
        {
            string requerimiento;
            cin >> requerimiento;
            //requerimientos.push_back(requerimiento);
        }

        //Propuestas
        vector<Propuesta> propuestas;
        for (int j = 0; j < numeroPropuestas; ++j)
        {
            string nombrePropuesta;
            float costo;
            int reqCumplidos;
            cin >> nombrePropuesta;
            cin >> costo >> reqCumplidos;
            Propuesta nuevaPropouesta = Propuesta(nombrePropuesta, costo, j, reqCumplidos);

            for (int i = 0; i < reqCumplidos; ++i)
            {
                string nombreReq;
                cin >> nombreReq;
                //nuevaPropouesta.propuestas.push_back(nombrePropuesta);
            }
            propuestas.push_back(nuevaPropouesta);
        }





        //Ordenamos para elegir por requerimiento
        Propuesta aux;
        for (int k = 0; k < propuestas.size(); k++)
        {
            if (propuestas[k].reqCumplidos < propuestas[k + 1].reqCumplidos)
            {
                aux = propuestas[k];
                propuestas[k] = propuestas[k + 1];
                propuestas[k + 1] = aux;
            }
        }

        int maxReq = propuestas[propuestas.size()].reqCumplidos;
        for (int l = 0; l < propuestas.size(); ++l)
        {
            if (propuestas[l].reqCumplidos != maxReq)
                propuestas.erase(propuestas.begin() + l);
        }

        if (propuestas.size() > 1)
        {
            //Orden por precio
            Propuesta aux;
            for (int k = 0; k < propuestas.size(); k++)
            {
                if (propuestas[k].precio < propuestas[k + 1].precio)
                {
                    aux = propuestas[k];
                    propuestas[k] = propuestas[k + 1];
                    propuestas[k + 1] = aux;
                }
            }

            float minCosto = propuestas[propuestas.size() + 1].precio;
            for (int l = 0; l < propuestas.size(); ++l)
            {
                if (propuestas[l].precio != minCosto)
                    propuestas.erase(propuestas.begin() + l);
            }

            if (propuestas.size() > 1)
            {
                Propuesta aux;
                for (int k = 0; k < propuestas.size(); k++)
                {
                    if (propuestas[k].ordenAparicion < propuestas[k + 1].ordenAparicion)
                    {
                        aux = propuestas[k];
                        propuestas[k] = propuestas[k + 1];
                        propuestas[k + 1] = aux;
                    }
                }

                int minOrden = propuestas[0].ordenAparicion;
                for (int l = 0; l < propuestas.size(); ++l)
                {
                    if (propuestas[l].ordenAparicion != minOrden)
                        propuestas.erase(propuestas.begin() + l);
                }
            }
        }

        numeroPropuesta++;
        cout << "RFP #" << numeroPropuesta << "\n";
        cout << propuestas[0].nombre << "\n" << "\n";
    }

    return 0;
}