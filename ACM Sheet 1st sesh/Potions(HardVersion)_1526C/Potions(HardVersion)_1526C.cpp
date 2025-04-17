#include <iostream> 
#include <vector> 
#include <queue>

int solve(int n){

    int count = 0;
    int potion;
    int health = 0;

    std::priority_queue<int> potions;

    for (int i =0; i<n; i++){
        std::cin>> potion;
        potions.push(potion);
    }

    int no_of_potions = potions.size();
    for (int i = 0; i<no_of_potions;i++){
        health += potions.top();
        // std::cout<< "Health : " << health<< "\n";
        potions.pop();
        if (health > -1){
            count++;
        }
        else{
            return count;
        }
        
    }
    return count;
}

int main() {

    int n; 
    std::cin >> n; 

    std::cout << solve(n);



}