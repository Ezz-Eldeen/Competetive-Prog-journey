#include <iostream>
#include <vector>

int main()
{

    int n;
    scanf("%d", &n);
    std::vector<long long> input;
    long long global_max;
    long long current_max;

    
    for (int i = 0; i<n; i++)
    {    int a;
        scanf("%d", &a);
        input.push_back(a);}
    
    // for (int n: input){                                                          // print input
    //     std::cout<< n << " ";
    // }

    current_max = input[0];
    global_max = current_max;

 
    
    for (int i = 1; i < n; i++)
    {
        
        if (current_max > global_max)
        {
            global_max = current_max;
            
            
        }
        if(current_max > 0){
            current_max += input[i];
        }
        else 
        {
            current_max = input[i];   
        }
        
        
        
    }
    std::cout << global_max;
    return 0;
}
