#include <iostream> 
#include <unordered_set> 
#include <string> 

std::unordered_set<std::string>  usernames; 

int count = 1;
void checkName(){

    std::string username;
    // scanf("%s", &username);
    std::cin >> username;
    
    if(!(usernames.count(username))){
        std::cout<< "OK" << "\n";
        usernames.insert(username);
    }
    else {
        std::string new_name = username+std::to_string(count);
        count++;
        // std::cout<< "new name: " << new_name <<"\n";
        usernames.insert(new_name);
        std::cout << new_name << "\n";}
}
int main() {
int n; 
scanf("%d", &n);

while (n--)
    checkName();

}