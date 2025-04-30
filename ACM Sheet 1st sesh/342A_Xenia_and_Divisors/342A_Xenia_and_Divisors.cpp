#include <iostream>
#include <vector>

int main()
{

    int n;
    std::cin >> n;

    std::vector<int> v(8);
    for (int i = 0, a; i < n; i++)
    {
        scanf("%d", &a);
        v[a]++;
    }

    if (v[1] == (n / 3) && v[5] == 0 && v[7] == 0 && v[3] <= v[6] && v[2] == (v[4] + (v[6] - v[3])))
    {
        while (v[4]--)
        {
            printf("1 2 4 \n");
            v[2]--;
        }
        while (v[2]--){
            printf("1 2 6 \n");
        }
        while(v[3]--){
            printf("1 3 6 \n");
        }
    }

    else
        printf("-1\n");
    return 0;
}
