#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int q;
        scanf("%d", &q);

        std::vector<long long> stairs;
        std::vector<long long> prefix_stairs;
        std::vector<long long> prefix_max_stairs;

        for (int i = 0; i < n; i++)
        {
            long long a;
            scanf("%lld", &a);
            stairs.push_back(a);    
        }

        // std::sort(stairs.begin(), stairs.end());
        
        prefix_stairs.push_back(0);
        if (!stairs.empty())
            prefix_max_stairs.push_back(stairs[0]);
        
        for (int i = 1; i < n; i++)
        {
            prefix_stairs.push_back(prefix_stairs[i-1] + stairs[i]);
            prefix_max_stairs.push_back( std::max(prefix_max_stairs.back(), stairs[i]));
        }
            
        for (int i = 0; i < q; i++)
        {
            long long a;
            scanf("%lld", &a);

            int return_index = std::upper_bound(prefix_max_stairs.begin(), prefix_max_stairs.end(), a) - prefix_max_stairs.begin();
            std::cout<< prefix_stairs[return_index]<< " ";

        }



    }

    return 0;
}