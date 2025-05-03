#include <iostream>
#include <map>
#include <vector>

int main()
{

    int n;
    scanf("%d", &n);

    int m;
    scanf("%d", &m);

    std::vector<std::string> input;
    std::vector<std::pair<int, int>> first_half;       //first half of the TakCode
    std::vector<std::pair<int, int>> second_half;

    for (int i = 0; i < n; i++)
    {
        std::string s;
        std::cin >> s;
        input.push_back(s);
    }

    // for (auto i: input){
    //     std::cout<< i << "\n";
    // }
    int count = 0;          // for checking how many columns fit the first half of the pattern
    int counter = 0;        // for testing
    for (int i = 0; i < n - 3; i++)             // Calculate all top left coords of 1st half of the TakCode
    {

        count = 0;
        for (int j = 0; j < m; j++)
        {
            // std::cout << "hi ";
            if (input.at(i).at(j) == '#' &&
                input.at(i + 1).at(j) == '#' &&
                input.at(i + 2).at(j) == '#' &&
                input.at(i + 3).at(j) == '.' &&
                count < 3)
            {
                count++;
            }
            else if (count == 3 &&
                     input.at(i).at(j) == '.' &&
                     input.at(i + 1).at(j) == '.' &&
                     input.at(i + 2).at(j) == '.' &&
                     input.at(i + 3).at(j) == '.')
            {
                count = 0;
                first_half.emplace_back(i + 1, j - 2); // i+1 due to 1-based indexing
                counter++;                         // j-2 because it confirms the pattern at the end of it -
                                                   // (after checking 4 columns) so actually it is j-3+1
                                                   // add j-- here? 
                // std::cout << "found upper corner at " << i << " , " << j << "\n";
            }
            else
            {
                count = 0;
            }
        }
    }


    // emplace the coords found from the previous loop into the output vector if they - 
    // satisfy the conditions of the second pattern
    int index = 0;
    for (int i = 1; i < n - 3; i++)
    {
        count = 0;
        for (int j = 0; j < m; j++)
        {
            // std::cout << "hi ";
            if (
                input.at(i).at(j) == '.' &&
                input.at(i + 1).at(j) == '.' &&
                input.at(i + 2).at(j) == '.' &&
                input.at(i + 3).at(j) == '.' &&
                count < 1)
            {
                count++;
            }

            else if (1 <= count < 4 &&
                     input.at(i).at(j) == '.' &&
                     input.at(i + 1).at(j) == '#' &&
                     input.at(i + 2).at(j) == '#' &&
                     input.at(i + 3).at(j) == '#')

            {
                if (count == 3) std::cout<< "empalcing \n", second_half.emplace_back(i+2, j-1), count  =0;
                else
                count ++;
                // std::cout<< "found second column \n";
                // if ( count ==4)
                //     std::cout << count << "\n";
                // counter++;
            }
            // else if (count == 4)
            // {
            //     // if (points.at(index).first == (i + 1 - 6 +1) && points.at(index).second == (j - 2 - 6 +1)) //try 0, +1 and -1
            // second_half.emplace_back(i+2, j-2);         //
            // // index++;
            // // counter++;
            // count =0;
            // j--;
            // // std::cout << "found lower corner at " << i << " , " << j << "\n";
            // }
            else
            {
                count = 0;
            }
        }

    }

    for (auto it : second_half)
    {
        std::cout << "x: " << it.first << " y: " << it.second << "\n";
    }

    std::cout << count;

    return 0;
}