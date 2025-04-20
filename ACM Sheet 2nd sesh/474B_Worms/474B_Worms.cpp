#include <iostream>
#include <vector>

int main()
{

    int n;
    scanf("%d", &n);

    std::vector<int> piles;
    
    for (int i = 0; i < n; i++) // take piles from the user
    {
        int a;
        scanf("%d", &a);
        piles.push_back(a);
    }
    
    std::vector<int> prefix_sum_piles = piles;              //created a copy to make the code easier to comprehend

    for (int i = 1; i < n; i++)                             // Get the prefix sum of piles
    {
        prefix_sum_piles[i] = prefix_sum_piles[i-1] + prefix_sum_piles[i];    
    }

    // for (int i: prefix_sum_piles){                         //print it for debugging

    //     std::cout<< "The prefix_sum_piles: " << i; 
    // }





    int m;
    scanf("%d", &m);

    std::vector<int> labels;
    for (int i = 0; i < m; i++)
    {
        int a;
        scanf("%d", &a);
        labels.push_back(a);

        std::cout<< std::lower_bound(prefix_sum_piles.begin(), prefix_sum_piles.end(), a) - prefix_sum_piles.begin() +1 <<"\n";
    }

    for (int i = 0; i < m; i++)
    {

    }

    return 0;
}