#include <stdio.h>

int F(int n) {
    if (n == 0)                  // Base case: F(0) = 0
        return 0;
    else if (n == 1)             // Base case: F(1) = 1
        return 1;
    else if (n == 2)             // Base case: F(2) = 2
        return 2;
    else
        return F(n - 3) + F(n - 2);  // Recursive step: F(n) = F(n-3) + F(n-2)
}

int main() {
    int n = 10;
    printf("F(%d) = %d\n", n, F(n));  // Call the recursive function and print the result
    return 0;
}
