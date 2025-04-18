#include <iostream>
#include <queue>

int score_sereja = 0;
int score_dima = 0;

int main()
{

    int n;
    scanf("%d", &n);

    std::deque<int> cards;


int selected_card = 0;






    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        cards.push_back(a);
    }
bool turn_sereja = true;
    while(n--){
        
        // std::cout << "Loop iteration \n";
        
        if (turn_sereja)
        {

            // std::cout << "if iteration \n";
            if (cards.front() > cards.back())
            {
                selected_card = cards.front();
                cards.pop_front();
            }
            else{
                selected_card = cards.back();
                cards.pop_back();
        
            }
            
            score_sereja += selected_card;
            turn_sereja = !turn_sereja;
            selected_card = 0;
            }

        else{


            if (cards.front() > cards.back())
            {
                selected_card = cards.front();
                cards.pop_front();
            }
            else{
                selected_card = cards.back();
                cards.pop_back();
        
            }

            score_dima += selected_card;
            turn_sereja = !turn_sereja;
            selected_card= 0;
        }

    }
    std::cout << score_sereja << " " << score_dima;


    return 0;
}
