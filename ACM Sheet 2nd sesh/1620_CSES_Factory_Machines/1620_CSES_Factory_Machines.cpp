#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

    int n;
    std::cin >> n;

    int k;
    std::cin >> k;

    // std::vector<std::pair<int, int>> manufacturing_times;
    std::vector<std::pair<int, int>> mt; // manufacturing times

    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        // manufacturing_times.emplace_back(a, 0);
        mt.emplace_back(a, 0);
    }

    // std::sort(manufacturing_times.begin(), manufacturing_times.end());
    std::sort(mt.begin(), mt.end());

    // for (int i = 0; i<n; i++){

    //     manufacturing_times[i].second++;
    //     std::cout << "pair first: " << manufacturing_times[i].first << "\n" << "pair second: "<< manufacturing_times[i].second << "\n";
    // }

    // std::cout<< manufacturing_times.at(0).first;
    int minutes = 0;
    int products = 0;
    // for (int i = 0; i < n+1; i++)
    // {
    //     int j = 0;
    //     while (1)
    //     {
    //         if ((j == n - 1)) // ultimate machine case
    //         {
    //             // if (manufacturing_times[j].first < k)
    //             // {
    //                 manufacturing_times[j].second++;
    //                 minutes += manufacturing_times[j].first;
    //                 std::cout<< "Minutes: " << minutes << "\n";
    //                 break;
    //             // }
    //         }
                // else if (manufacturing_times[j].first * (manufacturing_times[j].second +1) <= manufacturing_times[j + 1].first * (manufacturing_times[j+1].second +1) )
    //             {
    //                 // std::cout<< manufacturing_times[j].first<< "\n";
    //                 std::cout<<  manufacturing_times[j].first << " * " << (manufacturing_times[j].second +1) << "\n";
    //                 std::cout << "LHS: "<< manufacturing_times[j].first * (manufacturing_times[j].second +1)<< "\nRHS: " << manufacturing_times[j + 1].first * (manufacturing_times[j+1].second +1) << "\n";
    //                 manufacturing_times[j].second++;
    //                 std::cout << manufacturing_times[j].first << " * " << manufacturing_times[j].second  << " = " << manufacturing_times[j].first*manufacturing_times[j].second << "\n";
    //                 minutes += manufacturing_times[j].first;
    //                 std::cout<< "Minutes-algo: " << minutes << "\n";
    //                 break;
    //             }

    //             else if (j < n - 2) // n-2 = penultimate index.
    //             {
    //                 j++;
    //             }

    //             else
    //             {
    //                 std::cout << "you messed up \n";
    //             }

    //     }
    // }
    int j = 0;
    while (products < k)
    {

    // if (j<n-1 )
    //    { std::cout << "LHS: "<< mt.at(j).first * (mt.at(j).second + 1) << "\nRHS: " << mt.at(j+1).first * (mt.at(j+1).second + 1) << "\n";

        
    //     std::cout<< " First Number: " <<  mt.at(j+1).first << " Second Number: " << (mt.at(j+1).second + 1) << "\n";
    //     std::cout<< "j is: " << j << "\n";  
    // }
    

    // else
        // std::cout << "LHS: "<< mt.at(j).first * (mt.at(j).second + 1) << "\nRHS: out of range \n"; 

    if (j == n - 1)
        {
            // std::cout<< "invoked \n";
            // std::cout << "adding: " << mt.at(j).first << "\n";
            mt[j].second++;
            products++;
            j = 0;
            // std::cout<< "J is zeroed\n";
            // minutes += mt[j].first;
    
        }
        // std::cout << "j+1 and second value is: "<< j+1 << " " << mt.at(j+1).second+1 << "\n";
        if ((mt.at(j).first * (mt.at(j).second + 1) <= mt.at(j+1).first * (mt.at(j+1).second + 1)) && products < k)
        {
            // std::cout<< "j : "<< j << "\n" ;
            // std::cout<< "j is: " << j << "\n";
            mt[j].second++;
            products++;
            // std::cout << "adding: " << mt[j].first << "\n"; 
            //  minutes += mt[j].first;
            j = 0;
        }
        else
        {   
            j++;
            // std::cout<< "Incrementing j to be: " << j <<"\n" ;
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        minutes= std::max(minutes, (mt.at(i).first)*(mt.at(i).second));
    }

    std::cout << minutes;
    return 0;
}