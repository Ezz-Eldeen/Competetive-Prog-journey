# [1742E_Scuza] (https://codeforces.com/problemset/problem/1742/E)

## Problem Idea

Create an array of the input however if the next input integer is lesser than the previous input, just put the previous input instead, that way, the input will be a monotonic function (non-decreasing) with the same number of elements as the input.

    After that, for each question if you just use the upper_bound function on the monotonic function array,
    you will get the index of then when the input step is larger than the question, and since the prefix-sum array starts from zero that shift is already taken care of, so you just return the prefix_sum[return_index] and you'll get the sum of the input step until it reaches the first step it cannot step on. 
