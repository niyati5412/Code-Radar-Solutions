#include <stdio.h>

int main() {
    char ch;
    
    // Taking input
    scanf("%c", &ch);

    // Checking conditions
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}