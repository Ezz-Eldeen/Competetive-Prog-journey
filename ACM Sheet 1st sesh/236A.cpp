#include <iostream>
#include <unordered_set>

int main() {

std::string name; 

std::cin >> name; 

std::unordered_set<char> set;

for (char letter: name) {
    set.insert(letter);
}

if (set.size()%2) {
    std::cout << "IGNORE HIM!";
}
else {
   std::cout <<  "CHAT WITH HER!";
}



}
