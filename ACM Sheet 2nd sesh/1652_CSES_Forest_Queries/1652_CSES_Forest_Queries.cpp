#include <iostream>
#include <vector>

void solve()
{

    int n;
    std::cin >> n;

    int q;
    std::cin >> q;

    std::string tree_line = "";

    std::vector<std::vector<int>> grid(n + 1, std::vector<int>(n + 1));

    for (int i = 0; i < n; i++) // convert the input to a binary grid
    {
        std::cin >> tree_line;

        for (int j = 0; j < tree_line.size(); j++)
        {
            if (tree_line[j] == '.')
            {
                // std::cout<< "Current Character: "<< tree_line[j] << " ";
                grid[i + 1][j + 1] = 0; // i+1 and j+1 are the zero-offsets in the prefix sum array
            }

            else if (tree_line[j] == '*')
            {
                grid[i + 1][j + 1] = 1;
            }

            else
            {
                std::cout << "Please restart the program and enter a valid tree_line";
            }
        }
    }

    // for (auto v: grid){                  //uncomment to print grid
    //     for (auto e: v){
    //         std:: cout<< e;
    //     }
    //     std::cout<< "\n";
    // }

    for (int i = 1; i <= n; i++)
    { // convert the bin grid to a prefix sum grid
        for (int j = 1; j <= n; j++)
        {
            grid[i][j] = (grid[i][j - 1] + grid[i][j]) + (grid[i - 1][j] - grid[i - 1][j - 1]);
        }
    }

    // for (auto v : grid)                  // uncomment to print grid
    // {
    //     for (auto e : v)
    //     {
    //         std::cout << e;
    //     }
    //     std::cout << "\n";
    // }

    // take in queries
    for (int i = 0; i < q; i++)
    {
        // std::cout << "outer loop \n";
        std::vector<int> query_coords;
        for (int j = 0; j < 4; j++)
        {
            // std::cout << "inner loop \n";

            int a;
            std::cin >> a;
            query_coords.push_back(a);
        }
        int row_1 = query_coords[0];
        int column_1 = query_coords[1];
        int row_2 = query_coords[2];
        int column_2 = query_coords[3];

        int sum_in_rect = grid[row_2][column_2] - grid[row_2][column_1-1] - grid[row_1-1][column_2] + grid[row_1-1][column_1-1];
        std::cout << sum_in_rect << "\n";
    }
}

int main()
{

    solve();

    return 0;
}