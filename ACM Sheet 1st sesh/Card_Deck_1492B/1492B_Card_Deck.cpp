#include <iostream>
#include <vector>
#include <deque>
#include <unordered_set>

void printBuffer(std::deque<int> &buffer)
{
    // std::cout << "The buffer is: ";
    for (int x : buffer)
    {
        std::cout << x << " ";
    }
    std::cout << '\n';
}

void printOutput(std::deque<int> &output)
{
    // std::cout << "The output is: ";

    for (int card : output)
    {

        std::cout << card << " ";
    }
    std::cout << std::endl;
}

int main()
{

    int t_cases;

    scanf("%d", &t_cases);
    // std::cout << "got test cases= " << t_cases << "\n";

    for (int i = 0; i < t_cases; i++)
    {

        // std::cout << "Starting the algorithm for the input deck" << "\n";
        int n;
        scanf("%d", &n);

        std::deque<int> original_deck;
        std::deque<int> buffer; // temporarily holds the values that preceed the maximum value
        // std::vector <int> adjusted_deck;
        // std::unordered_set<int> visited;
        std::vector<bool> isVisited(n, 0);
        std::deque<int> output;

        int max_value = n;

        for (int i = 0; i < n; i++)
        {
            int e;
            scanf("%d", &e);

            original_deck.push_back(e);
            // std::cout << "Original Deck back: " << original_deck.back() <<"\n";
            // std::cout <<" inner for loop iteration " << "\n";
        }

        for (int i = 0; i < n; i++)
        {
            buffer.push_back(original_deck.back());
            isVisited[original_deck.back()-1] = 1;
            original_deck.pop_back();
            
            // std::cout << "Buffer back: " << buffer.back() <<"\n";
            
            if (buffer.back() == max_value)
            {
                // std::cout << "first max value is: " << max_value << "\n";
                // std::cout << "Buffer size: " << buffer.size() << "\n";
                int buffer_size = buffer.size();
                for (int i = 0; i < buffer_size; i++)
                {
                    // std::cout <<"I will add to the output set" << "\n";
                    output.push_back(buffer.back());
                    buffer.pop_back();
                    // printBuffer(buffer);
                }
                // std::cout << "entered second loop" <<"\n";
                while (isVisited.at(max_value-1) && max_value != 1)
                {
                    max_value--;
                }
                // std::cout << "new max value is: " << max_value << "\n";
            }

            //         if (buffer.front() == max_value){               // if max_value is reached

            //             for (int i = 0; i<buffer.size(); i++){       //Load all of the buffer values into the O/P
            //                 std::cout << "entered third loop" <<"\n";

            //                 output.insert(buffer.front());              // the output is a hash set to igonre dupes
            //                 buffer.pop_front();
            //             }
            //             max_value--; // Decrement max value for the rest of the deck
            //         }

            // }
        }
        printOutput(output);
    }
    return 0;
}
