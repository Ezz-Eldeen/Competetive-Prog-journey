#include <iostream>

int count;

// int countTuples(int N, int i = 0,int A = 0, int B = 0, int C = 0 )
// {
//     if (i==3) return (1 == N) ? 1 : 0;

// for (int j = 0; j<=N; j++){
// count += countTuples(N, i+1);
// }


// }



int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i<n; i++)
    for(int j = 1; i*j <n; j++)
        
        if (n- i*j >=1) count++;            //since A*B+C = n, therefore C = n-A*B and C is >=0 if n-A*B >= 0

    
    std::cout<< count; 
    return 0;
}