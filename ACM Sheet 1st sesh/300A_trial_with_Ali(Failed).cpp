#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int n;
vector<int> input_vec;
vector<int> vec_one;
vector<int> vec_two;
vector<int> vec_three;

void printVector(const vector<int>& vec) { //use a const reference for efficiency
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i < vec.size() - 1) {
            cout << ", "; // Add a comma and space between elements
        }
    }
}

int value;
int main(){

    cout << "Please enter n: ";
    cin >>n;
    cin.ignore();
    string line;
    getline(cin, line);
    stringstream ss(line);
    
    while (ss >> value){
        input_vec.push_back(value);
    }
    ss.seekg(0);
    int flag_nega=0;
    int flag_zero=0;
    for (auto i = input_vec.begin(); i<input_vec.end(); i++){
        if ( *i < 0){
            // vec_one.push_back(*i);
            flag_nega+=1;
        }
        else if (*i == 0) {
            // vec_two.push_back(*i);
            flag_zero+=0;
        }
    //     else if (*i > 0 ) {
    //         vec_three.push_back(*i);
    //     }
        if (!(flag_nega%2) && *i <0 )
        {
            vec_one.push_back(*i);
        }
        else if (flag_nega%2 && *i<0 )
        {
            vec_two.push_back(*i);
            
        }
        else if (*i==0)
        {
            vec_three.push_back(*i);
        }
        else 
        {
            vec_one.push_back(*i);
        }
        
        
        
        
     }
     if (vec_one.size() % 2 == 0) {
        vec_three.push_back(vec_one.back());
        vec_one.pop_back();
    }

        
        cout << vec_one.size()<< " ";
        printVector(vec_one) ;
        cout << "\n" <<vec_two.size()<< " ";
        printVector(vec_two);
        cout << "\n" << vec_three.size()<< " ";
        printVector(vec_three);


return 0; 
}