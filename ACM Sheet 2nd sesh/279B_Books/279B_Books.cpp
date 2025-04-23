#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

    int n;
    std::cin >> n;

    int t;
    std::cin >> t;

    std::vector<int> minutes;

    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        minutes.push_back(a);
    }

    int last_sub_arr_index = 0, sum = 0, max_length = 0;

    for (int i = 0; i < n; i++)
    {
        while (last_sub_arr_index < n && (sum + minutes[last_sub_arr_index]) <= t){
            sum += minutes[last_sub_arr_index];
            last_sub_arr_index ++;
        }
        max_length = std::max(max_length, (last_sub_arr_index - i)); // why not plus 1?
        
        sum -= minutes[i]; // sliding the sum window to the right to allow for possible extra books
                           // that might have not been possible due to the high value of the ith index
    }
    std::cout<< max_length;

    return 0;
}