#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Take input for the character
    scanf("%c", &ch);

    // Check if the character is a vowel (lowercase or uppercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        printf("Digit\n");
    }
    // Check if the character is an alphabetic character (consonant)
    else if (isalpha(ch)) {
        printf("Consonant\n");
    }
    // Otherwise, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
