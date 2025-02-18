#include <stdio.h>

int main() {
    int a, b, c;

    // Taking input for three sides
    scanf("%d %d %d", &a, &b, &c);

    // Checking the triangle validity using the Triangle Inequality Theorem
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}