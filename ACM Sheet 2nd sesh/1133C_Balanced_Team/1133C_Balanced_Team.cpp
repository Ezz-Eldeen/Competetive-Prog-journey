#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

int checkNo(std::vector<int> &input)
{

    int min = INT_MAX;
    int counter = 0;
    int max = 0;

    for (int i = 0; i < input.size(); i++)
    {
        // std::cout<< "Condition: " <<  (abs(input[i] - min) < 6) << std::endl;
        if ((abs(input[i] - min) < 6) || (i == 0 && counter == 0))
        {
            // std::cout << "Invoked if \n";
            // std::cout<< i;
            counter++;
            min = std::min(input[i], min);
            // std::cout << "new min: " << min << "\n";
        }
        else{
            // std::cout << "Invoked else \n";
            counter = 1;
            min = input[i];
        }
        if (max < counter)
            max = counter;

        }
        return max;
}
int main()
{

    int n;

    scanf("%d", &n);
    std::vector<int> input;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        input.push_back(a);
    }
    
    // std::sort(input.begin(), input.end());
    // for (int a: input){
    //     std::cout << a << " ";
    // }
    std::cout<< checkNo(input);

    return 0;
}