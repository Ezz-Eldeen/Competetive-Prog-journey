#include <iostream>
#include <vector>
#include <queue>

int solve(int n)
{

    long long count = 0;
    long long potion;
    long long health = 0;

    std::priority_queue<long long> potions;

    for (int i = 0; i < n; i++)
    {
        std::cin >> potion;
        health += potion;
        count++;
        potions.push(-potion);

        while (health < 0)
        {
        count--;
        health += potions.top();
        potions.pop();
        }
    }

    // int no_of_potions = potions.size();
    // for (int i = 0; i < no_of_potions; i++)
    // {
    //     health += potions.top();
    //     // std::cout<< "Health : " << health<< "\n";
    //     potions.pop();
    //     if (health > -1)
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         return count;
    //     }
    // }
    return count;
}

int main()
{

    int n;
    std::cin >> n;

    std::cout << solve(n);
}