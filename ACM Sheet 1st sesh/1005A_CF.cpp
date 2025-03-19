#include <iostream>
#include <vector> 

int main() {
std::vector <int> stairs_counter_arr;

int n; 
int stairway_counter = 0;
int stairs_counter =0; 
scanf("%d", &n);

for (int i = 0; i<n; i++){
int a;
scanf("%d", &a);
if (a == 1) {
    stairway_counter +=1;
    if (i!= 0) stairs_counter_arr.push_back(stairs_counter);
    stairs_counter = 0;
}
stairs_counter +=1;

}
printf("%d", stairway_counter);
printf("\n");
for (int i=0; i<stairs_counter_arr.size(); i++){
    printf("%d ",stairs_counter_arr[i] );
}

}