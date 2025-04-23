#include <iostream>
#include <vector>
#include <map>

int main()
{

    int n;
    scanf("%d", &n);

    int k;
    scanf("%d", &k);

    // std::vector<long long> input;
    std::map<int, int> m1;
		
  	bool found  = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        if (!found){
      	if (m1.find(k-a) != m1.end()){
          std::cout<< ((m1.find(k-a))->second) << " " << i+1;
          found = 1;
          break;
        }
      	m1.insert({a, (i+1)});
      	}
        // input.push_back(a);
    }
  if (!found){
    std::cout<< "IMPOSSIBLE";
  }

//   for (int i = 0; i< m1.size(); i++){
  	
//     std::cout<<m1[i] << " | "; 
    
//   }
  
			
 
  
  	// std::cout << m1[input[j]] << ' ' << m1[input[i]];
  
    return 0;
}
// 2
// 3 4 5 6 10 