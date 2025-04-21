#include <iostream>
#include <vector>

int main()
{

    int n;
    scanf("%d", &n);

    int q;
    scanf("%d", &q);

    std::vector<long long> x;
    x.push_back(0);

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);    
            x.push_back(a + x.at(i));
        
    }

    // std::cout << "The prefix sum: ";
    // for (int c : x)
    // {
    //     std::cout << c << " ";
    // }
    for (int i = 0; i < q; i++)
    {
        int a;
        scanf("%d", &a);
        int b;
        scanf("%d", &b);
        // int sum = 0;
        // for (int i = a; i<= b; i++)
        // {
        //     sum += x.at(i-1);
        // }
        // std::cout<< sum << "\n";
        // sum = 0;

        // std::cout << "b: " << x[b - 1] << "\n";



            std::cout << x[b ] - x[a - 1] << "\n";
        
    }

    return 0;
}