#include <stdio.h>

int main() {
    int a, b, c;

    // Take input for the three integers
    scanf("%d %d %d", &a, &b, &c);

    // Compare the numbers and find the maximum
    if (a >= b && a >= c) {
        printf("%d\n", a);
    } else if (b >= a && b >= c) {
        printf("%d\n", b);
    } else {
        printf("%d\n", c);
    }

    return 0;
}
