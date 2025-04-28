#include <iostream>
#include <map>

int main()
{

    int n;
    scanf("%d", &n);
    std::map<int, int> map;
    int most_occurences = 0;

    for (int i = 0; i < n; i++)
    {
        int a; 
        scanf("%d", &a);
        most_occurences = std::max(most_occurences, ++map[a]);
    }

    std::cout << most_occurences;
}