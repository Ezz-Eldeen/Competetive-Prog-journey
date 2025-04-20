#include <iostream>
#include <vector>
#include <algorithm>

int binarySearch(std::vector<int> &v, int target)               // Binary searh implementation
{

    int left = 0;
    int right = v.size() - 1;

    int mid = (left + right) / 2;
    // std::cout << "mid index is: " << mid<< "\n";


    while (left < right)    
    {
        // std::cout<< "Left index is: " << left<< "\n";
        // std::cout<< "Right index is: " << right<< "\n";

        if((right-left) == 1  && v.at(mid) != target){
            return left;
        }
        if (v.at(mid) > target)
        {
            right = mid - 1;
        }
        else if (v.at(mid) < target)
        {

            left = mid + 1;
        }

        mid = (left + right) / 2;
    }
    
    if (v.at(mid) == target)
    {
        return mid;
    }
    else {
        return -1;           //Change to return -1 to return -1 if the target was not found
    }
}
// previous function was rendered useless after 2 days of effort

int main()
{

    int n;
    scanf("%d", &n);

    int m;
    scanf("%d", &m);

    std::vector<int> n_vector;
    std::vector<int> m_vector;
    // std::vector<int> output;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        n_vector.push_back(a);
    }

    for (int i = 0; i < m; i++)
    {
        int a;
        scanf("%d", &a);
        m_vector.push_back(a);
    }

    std::sort(n_vector.begin(), n_vector.end());
    
    for (int i =0; i<m; i++){

       std::cout << std::upper_bound(n_vector.begin(), n_vector.end(),m_vector[i])- n_vector.begin() << " ";        
    }


    return 0;
}
