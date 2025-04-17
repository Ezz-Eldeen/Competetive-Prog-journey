#include <iostream>
#include <unordered_set>
#include <stack>

std::stack<std::string> notifications;
std::unordered_set<std::string> chats;

void solve(int n)
{

    for (int i = 0; i < n; i++)
    {
        std::string name;
        std::cin >> name;

        notifications.push(name);
    }
    while (!notifications.empty())
    {
        // std::cout << "Looping over the stack \n";
        if (!(chats.count(notifications.top())))
        {
            // std::cout << "Sorting chat \n";
            std::cout << notifications.top() << "\n";
            chats.insert(notifications.top());
            notifications.pop();
        }
        else{
            notifications.pop();
        }
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    // while (n--)
    solve(n);
}
