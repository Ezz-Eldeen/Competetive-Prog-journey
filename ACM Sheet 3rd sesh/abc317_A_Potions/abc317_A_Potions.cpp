#include <iostream>
#include <vector> 

int main()
{

    int n;
    scanf("%d", &n);
     
    int H;
    scanf("%d", &H);
    int X;
    scanf("%d", &X);
    std::vector<int> potions(n); 


    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        potions[i] = a;
    }
    int potion = std::distance(potions.begin(), std::lower_bound(potions.begin(), potions.end(), (X-H)));
    // int potion = 0;
    std::cout << ++potion;

    return 0;
}