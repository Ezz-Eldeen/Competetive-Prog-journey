#include <iostream>

int main()
{

    int n;
    std::cin >> n;

    int c_1 = 0, c_2 = 0, c_3 = 0, c_4 = 0, c_5 = 0, c_6 = 0, c_7 = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;

        switch (a)
        {
        case 1:
            c_1++;
            break;
        case 2:
            c_2++;
            break;

        case 3:
            c_3++;
            break;

        case 4:
            c_4++;
            break;
        case 5:
            c_5++;
            break;

        case 6:
            c_6++;
            break;

        case 7:
            c_7++;
            break;

        default:
            std::cout << "Defult case \n";
            break;
        }
    }

    int group_count = c_1;
    bool two_flag = 1;
    bool found_output = 0;
    if (group_count){
    for (int i = 0; i < group_count; i++)
    {
        // std::cout << "Iteration no.: " << i << "\n";
        // std::cout << "c_1 " << c_1 << "\n";
        if (c_1){
        if (c_2 && two_flag)
        {
            if (c_4){
                    std::cout << 1 << " " << 2 << " " << 4 << "\n";
                    c_1--;
                    c_2--;
                    c_4--;
                    found_output =1;

                
             }           
            else if(c_6){
                std::cout << 1 << " " << 2 << " " << 6 << "\n";
                c_1--;
                c_2--;
                c_6--;
                found_output =1;


             }
            else{
                // std::cout<< "2 didn't find a suitable partner ;)";
                group_count++;
                two_flag = !two_flag;

            }

        }
    else if(c_3 && c_6){
        std::cout << 1 << " " << 3 << " " << 6 << "\n";
        c_1--;
        c_3--;
        c_6--;
        found_output =1;



    }

    else if(!found_output)
    {
        // std::cout << "Wat, how did you get here? \n";
        std::cout << -1;
        return 0;
    }
    }
}}
else {
    std::cout << -1;
return 0;
}

    return 0;
}
