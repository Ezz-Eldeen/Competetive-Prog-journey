#include <iostream> 
#include <unordered_set>
#include <string> 

int main() {

    std::unordered_set<char> letters;
    std::string input;

    std::getline(std::cin, input);

        for (char letter: input){
            if (letter != '{' && letter != '}' && letter != ' ' && letter != ','){
                letters.insert(letter);
            }
        }
    printf("%d", letters.size());


}