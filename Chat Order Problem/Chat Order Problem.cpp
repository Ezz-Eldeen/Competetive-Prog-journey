#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<string> inbound_chats;
map<string, bool>map1;



int main(){

    long long n;
    
    scanf("%lld", &n);

    for (int i = 0; i<n; i++){
        string name;
        scanf("%s", &name);
        
        for (int k = 0; k<n; k++){
            if ((map1[name] == 0)){
                
                map1[name] =1;
                inbound_chats.push_back(name); 

            }
            else
            {
                
            }
            
    }
    
    
        inbound_chats.push_back(name);
    }    
  


}