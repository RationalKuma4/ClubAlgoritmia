#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    if (t >= 20) return 0;

    int salary[3];
    int minSalary, maxSalary, st;
    for (int i = 0; i < t; ++i)
    {
        cin >> salary[0] >> salary[1] >> salary[2];
        minSalary = min(salary[0], min(salary[1], salary[2]));
        maxSalary = max(salary[0], max(salary[1], salary[2]));

        for (auto sal:salary)
        {
            if (sal == minSalary) continue;
            if (sal == maxSalary) continue;
            st = sal;
        }

        cout << "Case " << i + 1 << ": " << st << "\n";
    }
    return 0;
}