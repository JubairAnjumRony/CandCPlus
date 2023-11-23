#include <stdio.h>

int main() {
    // Input three variables
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the maximum and minimum using if conditions
    int mx, mn;

    // Assume a is the largest initially
    mx = a;
    mn = a;

    // Check if b is larger than current max
    if (b > mx) {
        mx = b;
    }
    
    // Check if c is larger than current max
    if (c > mx) {
        mx = c;
    }

    // Check if b is smaller than current min
    if (b < mn) {
        mn = b;
    }

    // Check if c is smaller than current min
    if (c < mn) {
        mn = c;
    }

    // Output the results
    printf("The largest number is: %d\n", mx);
    printf("The smallest number is: %d\n", mn);

    return 0;
}
