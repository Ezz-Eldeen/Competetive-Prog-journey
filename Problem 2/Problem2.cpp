



// CPP program to demonstrate the
// unordered_map::bucket() function
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Declaration
    unordered_map<string, string> mymap;
 
    // Initialisation
    mymap = { { "Australia", "Canberra" },
              { "U.S.", "Washington" },
              { "France", "Paris" } };
 
    // prints the bucket number of the beginning element
    auto it = mymap.begin();
 
    // stores the bucket number of the key k
    int number = mymap.bucket(it->first);
    cout << "The bucket number of key " << it->first 
                                     << " is " << number;
 
    return 0;
cin.ignore();
cin.get();


}