#include <iostream>
#include <set>

#define numIn 300

using namespace std;

int absolute(int a)
{
    if (a < 0)return -a;
    else return a;
}

int main()
{
    set<int> jolly;
    int n, dif, cont, num[numIn];
    cont = 0;

    /*for (int i = 0; i < 10; ++i)
    {
        jolly.insert(i);
    }

    int a = jolly.count(1);*/

    for (int i = 0; i < 10; ++i)
    {
        jolly.insert(2);
    }

    int b = jolly.count(2);

    return 0;
}