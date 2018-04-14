#include <iostream>
#include <set>

#define numIn 300

using namespace std;

int main()
{
    set<int> jolly;
    long long int n, dif, cont, num[numIn];
    cont = 0;
    while (cin >> n)
    {
        for (int i = 0; i <= n - 1; i++)
            cin >> num[i];

        for (int i = 0; i <= n - 2; i++)
        {
            dif = num[i] - num[i + 1];
            jolly.insert(abs(dif));
        }

        for (int i = 1; i <= n - 1; i++)
            if (jolly.count(i))cont++;

        if (cont == n - 1) cout << "Jolly" << endl;
        else cout << "Not Jolly" << endl;
    }
    return 0;
}