#include <iostream>

using namespace std;

int main()


{
    int n;
    string s;
    int final_count =0;
    int index;

    cin >> n >> s;

    for (int i =0; i<n-1; i++){
        int c =0;
        for (int k =0; k<n-1; k++){

            if (s[i]== s[k] && s[i+1] == s[k+1]){
                c++;
            }
                        //  check the no. of occurences of the next bigram and compare it to the previous.
        }
        if (final_count < c){
            final_count = c;
            index = i;
        }
    
    }

    cout<< string(1,s[index]) + string(1, s[index+1]);





    cin.ignore(); // Ignore newline left in buffer
    cin.get();    // Wait for user to press Enter
    return 0;
}