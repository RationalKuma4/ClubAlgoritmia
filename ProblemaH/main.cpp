#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int numVel = 0;

    for (int i = 0; i < t; ++i)
    {
        cin >> numVel;
        int *velocidades = new int[numVel];
        for (int i = 0; i < numVel; i++)
            cin >> velocidades[i];

        int velMax = velocidades[0];
        for (int i = 1; i < numVel; i++)
            velMax = max(velMax, velocidades[i]);

        cout << "Case " << i + 1 << ": " << velMax << "\n";
        delete[] velocidades;
    }

    return 0;
}