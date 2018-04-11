#include <iostream>

using namespace std;

int main()
{
    int k = 0, n = 0, m = 0, x = 0, y = 0;
    do
    {
        cin >> k;
        if (k == 0) break;
        cin >> n >> m;

        for (int i = 0; i < k; ++i)
        {
            cin >> x >> y;
            if (n == x || m == y)
                cout << "divisa" << "\n";
            else if (x > n && y > m)
                cout << "NE" << "\n";
            else if (x < n && y > m)
                cout << "NO" << "\n";
            else if (x < n && y < m)
                cout << "SO" << "\n";
            else
                cout << "SE" << "\n";
        }
    } while (k != 0);
    return 0;
}