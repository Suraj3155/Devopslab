#include <stdio.h>

int main() {
    int a, b, sum;

    // Ask user to enter two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Calculate sum
    sum = a + b;

    // Display result
    printf("The sum is: %d\n", sum);

    return 0;
}

