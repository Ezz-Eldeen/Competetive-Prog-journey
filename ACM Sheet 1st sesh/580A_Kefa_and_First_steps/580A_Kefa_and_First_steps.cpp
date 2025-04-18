#include <iostream>

int main()
{

    int n;
    scanf("%d", &n);

    int subsegment_length = 0;
    int old_subsegment_length = 0;
    int old_value = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        if (a >= old_value)
        {
            old_value = a;
            // std::cout<< "old_value = "<< old_value << "\n";
            subsegment_length++;
            if (old_subsegment_length < subsegment_length)
            old_subsegment_length = subsegment_length; 
            // std::cout<< "Increased counter\n";
        }
        else{
            subsegment_length = 1;
            // std::cout<< "Reset counter\n";
            old_value = a;
            // std::cout<< "old_value = "<< old_value << "\n";

        }
        
    }
    std::cout<< old_subsegment_length;
    return 0;
}