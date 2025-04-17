#include <iostream>
#include <set>

int count = 0;

void solve(int n)
{

    std::set<std::pair<std::string, std::string>> leaf_pairs;

    for (int i = 0; i < n; i++)
    {
        std::string species;
        std::string colour;
        std::cin >> species;
        std::cin >> colour;

        std::pair<std::string, std::string> current_pair;

        current_pair = {species, colour};
        if (!(leaf_pairs.count(current_pair)))
        {
            leaf_pairs.insert(current_pair);
            count++;
        }

        // for (const auto &name : leaf_pairs)
        // {
        //     std::cout << "First name: " << name.first << "\n";
        //     std::cout << "Second name: " << name.second << "\n";
        // }
    }
    std::cout<< count;
}

int main()
{

    int n;
    scanf("%d", &n);

    solve(n);
}
