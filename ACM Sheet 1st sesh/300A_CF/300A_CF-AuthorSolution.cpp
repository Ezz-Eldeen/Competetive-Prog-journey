#include <iostream>
#include <vector>

using namespace::std;

vector <int> vec_one, vec_two, vec_three;

int main (){
    int n;

    scanf("%d", &n);


    for (int i = 0; i< n; i++){
        int a;
        scanf ("%d", &a);

        if (a<0){
            vec_one.push_back(a);
        }
        else if(a>0){
            vec_two.push_back(a);
        }
        else if(a==0){
            vec_three.push_back(a);
        }

    }
    if (!(vec_one.size()%2))
        vec_three.push_back(vec_one.back()), vec_one.pop_back();

    if (!(vec_two.size()))
        for (int i = 0; i<2; i++){vec_two.push_back(vec_one.back()), vec_one.pop_back();}

    printf("%d", vec_one.size());
    for (int i = 0; i < vec_one.size(); i++) {printf(" %d", vec_one[i]); }

    printf("\n%d", vec_two.size());
    for (int i = 0; i < vec_two.size(); i++) {printf(" %d", vec_two[i]); }

    printf("\n%d", vec_three.size());
    for (int i = 0; i < vec_three.size(); i++) {printf(" %d", vec_three[i]); }

    puts("");

}
