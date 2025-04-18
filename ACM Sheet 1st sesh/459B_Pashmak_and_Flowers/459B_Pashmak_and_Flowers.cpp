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
    int max = positive_queue.top();
    int min = abs(negative_queue.top());

    int old_max = positive_queue.top(); 
    positive_queue.pop();
    int old_min = abs(negative_queue.top());
    negative_queue.pop();
    int max_count = 1;
    int min_count = 1; 


    while(old_max == positive_queue.top())
    {
        max_count++;
        old_max = positive_queue.top();
        positive_queue.pop();
    }

    while(old_min == abs(negative_queue.top()))
    {
        min_count++;
        old_min = abs(negative_queue.top());
        negative_queue.pop();
    }
    std::cout << max-min << " " << max_count * min_count;
    
}