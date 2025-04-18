#include <iostream>
#include <queue>

int main()
{

    std::priority_queue<int> even_numbers;
    std::priority_queue<int> odd_numbers;



    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a;
        // scanf("%d", &a);
        std::cin >> a;

        if (a % 2)
        {
            odd_numbers.push(a);            //Store odd numbers in a priority queue                    

            // std::cout << "Odd Numbers: " << odd_numbers.top() << "\n";
        }

        else
        {
            even_numbers.push(a);           //Store even numbers in a priority queue
            // std::cout << "Even Numbers: " << even_numbers.top() << "\n";
        }
    }
    int size_difference;

    if ((odd_numbers.empty()))                      // Check for garbage values as a result of no input
        size_difference = -even_numbers.size();

    else if (even_numbers.empty())
        size_difference = odd_numbers.size();

    else if (even_numbers.empty() && odd_numbers.empty())
        size_difference = 0;

    else
        size_difference = odd_numbers.size() - even_numbers.size();
   
        // std::cout << "Size Difference: " << size_difference << "\n";

    if (abs(size_difference) < 2)                           // output zero if the difference between 
    {                                                       // the no of even numbers and odd No.(s) is 
        std::cout << 0;                                     // 0 or 1 
    }
    else
    {


        int sum = 0;
                                            
        if (size_difference > 0)    // if there are more odd numbers 
        {
            int odd_numbers_size = odd_numbers.size();
            for (int i = 0; i<odd_numbers_size-abs(size_difference); i++) // if n is the no. of even no.s
                {odd_numbers.pop();}                                    // I will remove the n+1 biggest values
                                                                        // from the odd queue and sum the rest
                                                                        // since every even no. will take out one odd
                                                                        // try it yourself

            odd_numbers.pop();

            while (!odd_numbers.empty())
            {
                sum += odd_numbers.top();
                odd_numbers.pop();
            }
        }
        else if (size_difference < 0)
        {
            int even_numbers_size = even_numbers.size();
            for (int i = 0; i<even_numbers_size-abs(size_difference); i++)
                {even_numbers.pop();}
                // std::cout << "Even Numbers' top after pop: " << even_numbers.top() << "\n";
    




        // std::cout << "Even Numbers' top: " << even_numbers.top() << "\n";
            even_numbers.pop();
        // std::cout << "Even Numbers' top after pop: " << even_numbers.top() << "\n";
            for (int i = 0; i<odd_numbers.size()-size_difference;)
                odd_numbers.pop();


            while (!even_numbers.empty())
            {
                // std::cout << "Entered even sum loop \n";
                sum += even_numbers.top();
                even_numbers.pop();
                // std::cout << "Sum value after operation: " << sum << "\n";
            }
        }
        std::cout << sum;
    }

    return 0;
}