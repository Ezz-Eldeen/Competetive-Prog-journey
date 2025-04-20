#include <iostream>
#include <algorithm>
#include <vector>
int main()
{

    int n;
    scanf("%d", &n);

    std::vector<int> prices;
    std::vector<int> coins;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        prices.push_back(a);
    }
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int a;
        scanf("%d", &a);

        coins.push_back(a);
    }

    std::sort(prices.begin(), prices.end());

    for (int i = 0; i < q; i++)
    {
        std::cout << std::upper_bound(prices.begin(), prices.end(), coins.at(i)) - prices.begin()<< "\n";
    }
    return 0;
}