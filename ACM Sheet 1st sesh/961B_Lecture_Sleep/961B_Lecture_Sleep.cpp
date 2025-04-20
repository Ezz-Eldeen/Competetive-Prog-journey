#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    int k;
    std::cin >> k;

    std::vector<int> theorems; // theorems in each minute
    std::vector<int> t;        // minute-awake status

    for (int i = 0; i < n; i++)
    { // store theorems
        int a;
        std::cin >> a;
        theorems.push_back(a);
    }

    for (int i = 0; i < n; i++)
    { // store t;
        int a;
        std::cin >> a;
        t.push_back(a);
    }

    long long theorems_learned = 0;
    long long max_theorems = 0;
    long long possible_extra_theorems = 0;
    long long extra_theorems = 0;

    for (long long i = 0; i < n; i++)
    {
        if (theorems.at(i) && t.at(i))
        {
            theorems_learned += theorems.at(i);
        }
        else if (theorems.at(i) && !(t.at(i)) && i < static_cast<long long>(theorems.size() - 2))
        {

            for (long long j = i; j < (i + k); j++)
            {
                if (!t.at(j))
                    possible_extra_theorems += theorems.at(j);
            }
            if (possible_extra_theorems > extra_theorems)
            {
                extra_theorems = possible_extra_theorems;
                possible_extra_theorems = 0;
            }
            else
            {
                possible_extra_theorems = 0;
            }
        }
    }
    max_theorems = extra_theorems + theorems_learned;
    std::cout << max_theorems;

    return 0;
}