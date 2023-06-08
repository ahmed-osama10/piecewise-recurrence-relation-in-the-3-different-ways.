# Piecewise Recurrence Relation Implementations in C

This repository contains three different implementations of a given piecewise recurrence relation in C. The recurrence relation is defined as F(n) = F(n-3) + F(n-2), with base cases F(0) = 0, F(1) = 1, and F(2) = 2.

## Development Environment

The code in this repository is written in C and can be compiled and executed on any system with a C compiler installed. The examples provided here use the GCC compiler, which is widely available on most platforms.

## Compilation and Execution

To compile and run the source codes, follow the steps below:

1. Clone or download this repository to your local machine.

2. Open a terminal or command prompt and navigate to the directory where the source code files are located.

### Memoization (Top-down Dynamic Programming)

3. Navigate to the `memoization` directory.

4. Compile the memoization approach code by running the following command:

5. Execute the program by running the following command:

### Recursive Approach

6. Navigate to the `recursive` directory.

7. Compile the recursive approach code by running the following command:

8. Execute the program by running the following command:

### Iterative Approach (Bottom-up Dynamic Programming)

9. Navigate to the `iterative` directory.

10. Compile the iterative approach code by running the following command:
 ```
 gcc iterative.c -o iterative
 ```

11. Execute the program by running the following command:
 ```
 ./iterative
 ```

## Results

After executing the respective commands for each approach, the output will be displayed on the console, showing the value of F(n) for the specified value of n.

Feel free to modify the values of n or the code itself to experiment with different inputs or variations of the recurrence relation.


