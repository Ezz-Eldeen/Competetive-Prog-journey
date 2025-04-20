#include <iostream> 
#include <deque>

std::deque<int> dqtest;

int main() {
    for (int i = 0; i<10; i++){
        int n;
        scanf("%d",&n);
dqtest.push_back(n);

}
for(int element: dqtest){
    std::cout << element << ",";
}
std::cout <<"The front is: " << dqtest.front();
}