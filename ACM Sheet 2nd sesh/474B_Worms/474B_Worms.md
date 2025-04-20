# [Worms] (https://codeforces.com/problemset/problem/474/B)

## Problem Idea

You want to be able to identify where each pile ends, and with that comes the prefix sum.

Think of the prefix sum as a container of multiple saves of a specific game that you like

and each each index is the level that you reached within that game, in this problem:

The input array: [2, 7, 3, 4, 9]
The prefix sum array: [2, 9, 11, 20, 29]

in level one (index 0 of the prefix sum array) You only unlocked the first two values starting from 0 (0->2)

and in level two (index 1 of the prefix sum array) You unlocked all the values until the value in index 1 (9). (0->9)

So, if we have a value and we want to know in which level it belongs to, we can use the lower_bound function 
to take us to the index of its group.

## Example (Optional)

(Taking the previous input array as the input)

if we want to know where worm 24 is, looking at the prefix sum, it'll definitley be after the 20 and before the 29, that's (lower_bound (x, x+a, 24)+1) [we add the "+1" because we started counting the piles from 1 not 0]

this only workss because the worms are numbered sequentially. 