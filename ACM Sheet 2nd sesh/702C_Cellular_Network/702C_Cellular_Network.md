# [702C_Cellular_Network] (https://codeforces.com/problemset/problem/702/C)

## Problem Idea

How I went about solving this problem, is I took each city's location and I looked at one tower after it and one tower before it using the upper_bound function.
Then I just took the absolute minimum difference between the city's location and the two towers adjacent to it.
Then I kept updating my maximum_difference variable using the std::max function. 

## Things to Watch Out For

Edge cases where you don't have at least two towers  i.e. (tower_coords.size() < 2)
