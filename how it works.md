# piecewise-recurrence-relation-in-the-3-different-ways.

# Recursive Approach:

Advantages:
Simple and intuitive implementation.
Directly represents the given recurrence relation.
Easy to understand and implement.

Disadvantages:
Inefficient for larger values of n due to redundant computations.
Requires multiple recursive calls, leading to a high function call overhead.
Exponential time complexity.

# Memoization (Top-down Dynamic Programming):

Advantages:
Efficiently avoids redundant computations by storing previously calculated values in the memoization table.
Reduces the time complexity to linear time (O(n)).
Avoids repetitive function calls, leading to improved performance.

Disadvantages:
Requires additional space for the memoization table.
The size of the memoization table needs to be predetermined and may need adjustment depending on the range of inputs.

# Iterative Approach (Bottom-up Dynamic Programming):

Advantages:
Efficiently computes the values in a bottom-up manner, starting from the base cases and gradually building up to the desired value.
Eliminates the overhead of function calls and recursion.
Provides optimal time complexity of O(n).

Disadvantages:
Requires additional space for the DP table, similar to the memoization approach.
May not be suitable if the entire DP table is not needed or if memory is a constraint.



