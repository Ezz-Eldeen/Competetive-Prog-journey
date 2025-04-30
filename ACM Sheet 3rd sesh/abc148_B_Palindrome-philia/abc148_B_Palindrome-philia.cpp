#include <iostream> 
#include <vector> 

int main() {

    std::string s; 

    // scanf("%s", &s);
    std::cin>> s;

    int count = 0;

    // int n = s.length();
    // for (auto c: s){
    //     count++;
    // }
    // std::cout << s.length();

    for (int i =0; i<(s.length()/2); i++){
        
        // std::cout << "test";
        if (!(s.at(i) == s.at(s.length()-(i+1))))
            count++;

        }
    std::cout<< count;
    return 0;
}