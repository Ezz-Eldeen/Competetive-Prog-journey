#include <iostream>
#include <queue>

int main()
{

    std::priority_queue<int> box_sizes;

    int n;
    scanf("%d", &n);
    int visible_boxes = n;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        box_sizes.push(-a);
    }
    int old_value = box_sizes.top(); 
    box_sizes.pop();
    while (!box_sizes.empty())
    {
        // std::cout<< "Entered Loop"<<"\n";
        if (box_sizes.top() == old_value)
        {
            old_value = box_sizes.top();
            box_sizes.pop();
        }
        else
        {
            visible_boxes--;
            old_value = box_sizes.top();
            box_sizes.pop();

        }
        
    }
    std::cout<< visible_boxes;
}