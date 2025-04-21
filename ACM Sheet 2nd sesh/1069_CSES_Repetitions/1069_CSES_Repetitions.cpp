#include <iostream>
#include <string>

int main()
{

    std::string DNA;

    std::getline(std::cin, DNA);
    char old = 1;
    long long count = 1;
    long long max_count = 0;

    for (char c : DNA)
    {

 
        if (c == old)
        {
            count++;
            // std::cout<< "Count is: " << count << "\n";
        }
        else
        {
            if (count > max_count)
            {
                // std::cout << "updated max \n";
                max_count = count;
            }
            count = 1;
        }
        if (count > max_count)
        {
            // std::cout << "updated max \n";
            max_count = count;
        }
        old = c;
    }
    std::cout << max_count;

    return 0;
}