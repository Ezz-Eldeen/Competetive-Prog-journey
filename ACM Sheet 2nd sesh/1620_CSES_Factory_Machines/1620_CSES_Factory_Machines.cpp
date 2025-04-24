#include <iostream>
#include <vector>
#include <climits>

int main()
{

    int n;
    std::cin >> n;

    int k;
    std::cin >> k;

    // std::vector<std::pair<int, int>> manufacturing_times;
    // std::vector<std::pair<int, int>> mt; // manufacturing times
    std::vector<int> mt; // manufacturing times
    int min_in = INT_MAX; //Initialization for worst time, worst_time = products x fastest_machine_time
    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;  
        // manufacturing_times.emplace_back(a, 0);
        // mt.emplace_back(a, 0);
        mt.push_back(a);
        min_in = std::min(min_in, a);
    }
    long long l = 0;
    long long r = min_in * k;
    long long best_time = 0;
    while (l <= r)
    {
        long long mid = (l + r) / 2;
        long long sum = 0;
        // std::cout<< "l and r: "<< l << " " << r << "\n";
        for (int i = 0; i < n; i++)
        {
            sum += mid/mt[i];
            if (sum >= k) 
                break;
        }

        if (sum >= k)
        {
            best_time = mid;
            r = mid-1; 
        }
        else {
            l = mid +1;
        }
    }

    std::cout << best_time;
    return 0;
}