#include <stdio.h>

#define MAX_N 1000
int memo[MAX_N];

int F(int n) {
    if (n == 0)                  // Base case: F(0) = 0
        return 0;
    else if (n == 1)             // Base case: F(1) = 1
        return 1;
    else if (n == 2)             // Base case: F(2) = 2
        return 2;

    if (memo[n] != -1)           // Check if the value is already computed and stored in the memoization table
        return memo[n];
    
    memo[n] = F(n - 3) + F(n - 2);  // Compute the value and store it in the memoization table
    return memo[n];
}

int main() {
    int n = 10;
    for (int i = 0; i < MAX_N; i++)   // Initialize the memoization table with -1
        memo[i] = -1;
    
    printf("F(%d) = %d\n", n, F(n));  // Call the memoized function and print the result
    return 0;
}
