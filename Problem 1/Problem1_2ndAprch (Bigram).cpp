#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {


    int n; 
    string s; 
    int max_counts=0;
    string final_bigram;
    cout << "Input n then s";
    cin >> n >> s;


    unordered_map <string, int>Two_gram;

    for (int i =0; i< n-1; i++){
        string bigram = s.substr(i,2);
        Two_gram[bigram]++;

        if (Two_gram[bigram]> max_counts){
            max_counts = Two_gram[bigram];
            final_bigram = bigram;
        }
    
    
    }
    cout << final_bigram << endl;

    cin.ignore();
    cin.get();

return 0;


    
}