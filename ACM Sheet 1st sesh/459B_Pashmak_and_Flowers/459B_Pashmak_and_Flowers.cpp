#include <iostream>
#include <queue>

int main()
{

    int n;
    scanf("%d", &n);

    std::priority_queue<int> positive_queue;
    std::priority_queue<int> negative_queue;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        positive_queue.push(a);
        negative_queue.push(-a);

    }
    long long n_inputs = positive_queue.size();                  // number of inputs
    int max = positive_queue.top();
    int min = abs(negative_queue.top());

    // std::cout<< positive_queue.size();

    int old_max = positive_queue.top(); 
    positive_queue.pop();
    int old_min = abs(negative_queue.top());
    negative_queue.pop();
    // std::cout<< positive_queue.size();

    long long max_count = 1;
    long long min_count = 1; 


    while(old_max == positive_queue.top() && !positive_queue.empty())
    {
        max_count++;
        old_max = positive_queue.top();
        positive_queue.pop();

    }

    while(old_min == abs(negative_queue.top()) && !negative_queue.empty())
    {
        min_count++;
        old_min = abs(negative_queue.top());
        negative_queue.pop();

    }
    long long combinations;
    if (max-min){
        combinations = max_count* min_count;
    }
    else {
        combinations = n_inputs*(n_inputs-1) /(2);
    }
    std::cout << max-min << " " << combinations;
    
}