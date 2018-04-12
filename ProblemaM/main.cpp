#include <iostream>
#include <set>

#define lista 1000

using namespace std;

long long int absolute(int a)
{
    if (a < 0)return -a;
    else return a;
}

int main()
{
    set<long long int> jolly;
    long long int n, dif, cont, num[lista];
    cont = 0;
    while (cin >> n)
    {
        for (int i = 0; i <= n - 1; i++)
            cin >> num[i];

        for (int i = 0; i <= n - 2; i++)
        {
            dif = num[i] - num[i + 1];
            jolly.insert(absolute(dif));
        }

        for (int i = 1; i <= n - 1; i++)
            if (jolly.count(i) > 0) cont++;

        if (cont == n - 1) cout << "Jolly" << endl;
        else cout << "Not Jolly" << endl;
    }
    return 0;
}