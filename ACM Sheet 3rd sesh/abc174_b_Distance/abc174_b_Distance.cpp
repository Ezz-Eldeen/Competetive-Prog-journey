#include <iostream> 
#include <cmath> 
#include <vector> 


int main (){


    int n;
    scanf("%d", &n);

    int D; 
    scanf("%d", &D);

    std::vector<long long> x_points(n);
    std::vector<long long> y_points(n);
    int count = 0;

    for (int i = 0; i< n; i++)
    {
        long long a;
        scanf("%lld", &a); 
        // x_points[i] = a;
        
        long long b;
        scanf("%lld", &b);
        // y_points[i] = b;

        if(sqrt(pow(a,2) + pow(b, 2)) <=D)
            count++;
        else
        ;
    }

    std::cout << count;
    return 0;
}