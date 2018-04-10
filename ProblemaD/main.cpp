#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    if (t >= 15) return 0;
    int a, b;
    for (int i = 0; i < t; ++i)
    {
        cin >> a >> b;
        if (a < b) cout << "<" << "\n";
        else if (a > b) cout << ">" << "\n";
        else cout << "=" << "\n";
    }
    return 0;
}