#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
int main()
{

    int n;
    scanf("%d", &n);

    int m;
    scanf("%d", &m);

    std::vector<long long> city_coords(n);
    std::vector<long long> tower_coords(m);
    long long l, r;
    long long difference = 0;
    long long max_difference = 0;
    for (int i = 0; i < n; i++)
    {
        long long a;
        scanf("%lld", &a);
        city_coords[i] = a;
    }

    for (int i = 0; i < m; i++)
    {
        long long a;
        scanf("%lld", &a);
        tower_coords[i] = a;
        // tower_coords.push_back(a);
    }
    // std::cout<< city_coords[0] << "\n";
    // std::cout<< tower_coords[0] << "\n";

    for (int i = 0; i < n; i++)
    {
        // std::cout << "Condition: " << (city_coords[0] < tower_coords[0] && i == 0) << "\n";

        // std::cout << "City coordinate 1: " << city_coords[0] << "\n";
        // std::cout<< "Tower coordinate 1: " << tower_coords[0] << "\n";
        // std::cout << "I: " << i << "\n";

        if (city_coords[0] < tower_coords[0] && i == 0)
        {
            // std::cout << "Invoked if" << std::endl;
            r = std::distance(tower_coords.begin(), std::upper_bound(tower_coords.begin(), tower_coords.end(), city_coords[i])); // right tower coordinate index
            // std::cout << "R: " << r << "\n";
            difference = tower_coords[r] - city_coords[i];
            // std::cout << "difference: " << difference << "\n";
        }
        else if (tower_coords.size() < 2)
        {

            for (int i = 0; i<n; i++){
            difference = abs(city_coords[i] - tower_coords[0]); 
            max_difference = std::max(max_difference, difference);
        }
        std::cout << max_difference;
        return 0;
        }
        else
        {
            // std::cout << "Invoked else" << std::endl;
            l = std::distance(tower_coords.begin(), std::upper_bound(tower_coords.begin(), tower_coords.end(), city_coords[i])) - 1; // left tower coordinate index
            r = std::distance(tower_coords.begin(), std::upper_bound(tower_coords.begin(), tower_coords.end(), city_coords[i]));     // right tower coordinate index
            long long l_d = abs(city_coords[i] - tower_coords[l]);                                                                   // distance from nearest city to the left

            long long right_element = tower_coords[r];
            long long left_element = city_coords[i];
            long long r_d = abs(tower_coords[r] - city_coords[i]); // distance from the nearest city to the right
            difference = std::min(l_d, r_d);
        }

        // std::cout << "Difference: " << difference << std::endl;
        max_difference = std::max(max_difference, difference);
    }
    std::cout << max_difference;

    return 0;
}