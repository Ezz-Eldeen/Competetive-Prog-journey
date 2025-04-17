#include <iostream> 
#include <unordered_map>

int solve(){


    std::string input;
    std::cin >> input;
    std::unordered_map<char, int> hash_table; 
    for (char bracket: input){

        bool second_condition = !(hash_table['('] == hash_table[')']);
        // std::cout <<"The second condition is"<< second_condition << "\n";
        
        // std::cout <<"First value "<< hash_table['('] << "\n";
        // std::cout <<"Second value "<< hash_table[')'] << "\n";

        if (bracket == '('){
            // std::cout << "invoked the if \n";
            hash_table['('] += 1;
        }

        else if (bracket == ')' && (second_condition)){
            // std::cout << "invoked the else \n";
            
            hash_table[')'] += 1;
        }
        
    }
    int count;

    if ( !(hash_table['('] == hash_table[')']) ){
           
        count = ( 2* hash_table[')']);

    }
    else{
        count = hash_table['('] + hash_table[')'];

    }
    return (count);
}


int main(){

std::cout<< solve();

}