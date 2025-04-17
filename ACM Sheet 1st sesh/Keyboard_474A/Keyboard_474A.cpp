#include <iostream> 
#include <string> 
#include <unordered_map>

int main() {

char d;
scanf(" %c", &d);

std::string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
std::string input;
std::unordered_map <char, int> original_keyboard;
std::unordered_map <int, char> right_mapping;
std::unordered_map <int, char> left_mapping;


for (int i = 1; i<=30; i++){
    original_keyboard[keyboard[i-1]] = i;
    right_mapping[i-1] = keyboard[i-1];
    left_mapping[i+1] = keyboard[i-1];
}


// scanf("%s", &input);
std::cin >> input;


if (d == 'R'){
    for (int i = 0; i<input.length(); i++){
        // std::cout<< "entered loop" <<std::endl;
        std::cout << left_mapping[original_keyboard[input[i]]];
    }
}

else if (d == 'L'){
    for (int i = 0; i<input.length(); i++){
        // std::cout<< "entered loop" <<std::endl;
        std::cout << right_mapping[original_keyboard[input[i]]];
    }
}
}