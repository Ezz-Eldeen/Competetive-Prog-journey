#include <iostream>

using namespace std;


int main()
{
 int n;
 string balls; 
 int counter = 0;
 
 cin>> n >> balls;
 
 for (int i = 1; i<n; i++) {
     if (balls[i-1] == balls[i]) {
         counter ++;
     }
 }

    cout<< counter; 
    return counter;
}