# 1643_CSES_Maximum_Subarray_sum (https://cses.fi/problemset/task/1643)

## Problem Idea

Use "Kadane's Algorith" as to keep track of the sum of the previous elements unless it will turn negative, if the sum of the previous elements is negative, that means it'll only decrease the next sum of contiguous elements therefore we should start counting again.

## Things to Watch Out For

[List any important details, edge cases, common mistakes, or implementation nuances that you needed to be careful about while solving the problem. This could include:]

* [Specific constraints (e.g., large input sizes, time limits).]
* [Edge cases (e.g., empty input, single element, all elements the same).]
* [Potential for overflow.]
* [Off-by-one errors.]
* [Specific data structure properties or limitations.]
* [Tricky implementation details.]
* [Assumptions you made.]

## Example (Optional)

[You can include a brief example (input and expected output) if it helps illustrate a key aspect of the problem or a tricky edge case.]