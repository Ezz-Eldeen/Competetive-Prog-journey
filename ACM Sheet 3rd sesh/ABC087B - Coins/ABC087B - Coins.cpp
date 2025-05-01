#include <iostream>

// int countCombinations(int i, int a, int b, int c, int x, int sum)        // AI solution
// {

//     if (i == 3)
//         return sum == x ? 1 : 0;

//     int limit = (i == 0) ? a : (i == 1) ? b : c;
//     int coinValue = (limit == a) ? 500 : (limit == b) ? 100 : 50;

//     int count = 0;

//     for (int j = 0; j <= limit ; j++)
//     {
//         count += countCombinations(i+1,a, b , c, x, sum + j*coinValue);
//         std::cout << "Count: " << count << "\n";
//     }

//     return count;
// }

int main()
{

    int A;
    scanf("%d", &A);

    int B;
    scanf("%d", &B);

    int C;
    scanf("%d", &C);

    int X;
    scanf("%d", &X);

    // std::cout<< countCombinations(0, A, B, C, X, 0);
    int count = 0;
    for (int i = 0; i <= A; i++)
    for (int j = 0; j<= B; j++)
    for (int k = 0; k<= C; k++){
        if ((i*500+ j*100 + k*50) == X)
            count++;
    }
     
    std::cout<< count;
    

    return 0;
}