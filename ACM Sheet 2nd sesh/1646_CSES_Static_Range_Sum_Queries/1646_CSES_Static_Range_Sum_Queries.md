# Static Range Sum Queries  (https://vjudge.net/contest/641367#problem/F)

## Problem Idea

To get the sum of all the numbers within a specific interval, we use a **prefix-sum** array.

since prefix-sum array = [x0, x0+x1, x0+x1,x3, x0+x1,x3+x4],
therefore, the sum of numbers (xn) between the "1" index and the "3" index (inclusive) [x1 + x2+ x3] is
prefix_sum_array[3] - prefix_sum_array[0] = (x0+x1,x3+x4) - (x0) = **x1 + x2+ x3 (Answer)**


## Things to Watch Out For

The problem had 1-based indexing, meaning it gave us the interval [2,4] to refer to the range between the indices [1,3], to account for this, we added a 0 at the beginning of the prefix array so that all the elements get shifted to the right.


* [Specific constraints the input array/prefix_sum_array had to be long long in order to fit the test cases.]

