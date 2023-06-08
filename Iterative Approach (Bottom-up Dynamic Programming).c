#include <stdio.h>

#define MAX_N 1000
int dp[MAX_N];

int F(int n) {
    dp[0] = 0;                   // Base case: F(0) = 0
    dp[1] = 1;                   // Base case: F(1) = 1
    dp[2] = 2;                   // Base case: F(2) = 2

    for (int i = 3; i <= n; i++)  // Compute the values iteratively starting from the base cases
        dp[i] = dp[i - 3] + dp[i - 2];
    
    return dp[n];                // Return the computed value
}

int main() {
    int n = 10;
    
    printf("F(%d) = %d\n", n, F(n));  // Call the iterative function and print the result
    return 0;
}

