#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int main()
{

    int n;
    scanf("%d", &n);

    int k;
    scanf("%d", &k);

    std::vector<long long> input;
    std::unordered_map<long long, int> m1;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
      	m1.insert({a, (i+1)});
        input.push_back(a);
    }

//   for (int i = 0; i< m1.size(); i++){
  	
//     std::cout<<m1[i] << " | "; 
    
//   }
  
    std::sort(input.begin(), input.end());
  	long long i, j;
  	bool found = 0;
  

    for (i = 0, j = input.size() - 1; i < input.size();) {
      long long sum = input[i] + input[j];
      if (sum > k) {
        j--;
      } else if (sum < k) {
        i++;
      } else if (sum == k){
        found = 1;
        break;
      }
    }
  	if (!found){
      std::cout<< "IMPOSSIBLE";
      return 0;
    }
 
  
  	std::cout << m1[input[j]] << ' ' << m1[input[i]];
  
    return 0;
}
// 50
// 1 3 5 6 10 