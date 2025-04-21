#include <iostream> 
// #include <unordered_set>
#include <unordered_map> 
#include <string> 

// std::unordered_set<std::string>  usernames; 
std::unordered_map<std::string, int> usernames;

void checkName(){

    std::string username;
    // scanf("%s", &username);
    std::cin >> username;
    
    if(!(usernames.count(username))){
        std::cout<< "OK" << "\n";
        usernames.insert({username, 1});
    }
    else {
        std::string new_name = username+std::to_string(usernames[username]);
        usernames[username] = usernames[username] +1 ;
        // std::cout<< "new name: " << new_name <<"\n";
        // usernames.insert(new_name);
        std::cout << new_name << "\n";}
}
int main() {
int n; 
scanf("%d", &n);

while (n--)
    checkName();

}