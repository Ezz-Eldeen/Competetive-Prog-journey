#include <iostream>
#include <vector>

long long max_difference;
int main()
{
    int n;
    std::cin >> n;
    int k;
    std::cin >> k;
    
    // std::cout << "Max difference: " << max_difference <<"\n";
    std::vector<long long> theorems; // theorems in each minute
    // std::vector<int> t;        // minute-awake status
    // std::vector<int> unsolved_prefix_sum(n+1);
    long long sum = 0;
    theorems.push_back(0);
    for (int i = 0; i < n; i++)
    { // store theorems
        long long a;
        std::cin >> a;
        theorems.push_back(a);
        sum += a;
    }
    // unsolved_prefix_sum.push_back(0);
    for (int i = 1; i <= n; i++)
    { // store t;
        long long t;
        std::cin >> t;
        if (t){
            theorems[i] = 0;
        }
        else{
            sum -= theorems[i];
        }
        // theorems[i]*=1-t;
        // sum -= theorems[i];
        // unsolved_prefix_sum.push_back(unsolved_prefix_sum[i-1] + theorems[i-1]);
        theorems[i] += theorems[i-1];
    }
    for (int i =k ; i<=n; i++){
        // max_difference = std::max(unsolved_prefix_sum[i],unsolved_prefix_sum[i]-unsolved_prefix_sum[i-k]);
        max_difference = std::max(max_difference,theorems[i]-theorems[i-k]);

    }
    // std::cout<< k << "\n";
    std::cout<< sum+ max_difference;


    // long long theorems_learned = 0;
    // long long max_theorems = 0;
    // long long possible_extra_theorems = 0;
    // long long extra_theorems = 0;

    // for (long long i = 0; i < n; i++)
    // {
    //     if (theorems.at(i) && t.at(i))
    //     {
    //         theorems_learned += theorems.at(i);
    //     }
    //     else if (theorems.at(i) && !(t.at(i)) && i < static_cast<long long>(theorems.size() - 2))
    //     {

    //         for (long long j = i; j < (i + k); j++)
    //         {
    //             if (!t.at(j))
    //                 possible_extra_theorems += theorems.at(j);
    //         }
    //         if (possible_extra_theorems > extra_theorems)
    //         {
    //             extra_theorems = possible_extra_theorems;
    //             possible_extra_theorems = 0;
    //         }
    //         else
    //         {
    //             possible_extra_theorems = 0;
    //         }
    //     }
    // }
    // max_theorems = extra_theorems + theorems_learned;
    // std::cout << max_theorems;

    return 0;
}