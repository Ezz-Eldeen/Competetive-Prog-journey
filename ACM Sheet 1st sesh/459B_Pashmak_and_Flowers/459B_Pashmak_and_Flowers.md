# 459B_Pashmak_and_Flowers ([Problem Link](https://codeforces.com/problemset/problem/459/B))

## Problem Idea

Realize that to get all the possible combinations of 2 flowers that have the
maximum beaty score, you just multiply the
number of occurrences of the maximum number by the occurrences of the minimum number.

UNLESS, all the numbers are the same, then you substitue in the combinations formula

 possible combinations: `n!/(k!(n-k)!)`


## Things to Watch Out For

* Don't forget to check if the prioqueue wasn't empty before checking it which spat out some garbage. 
  