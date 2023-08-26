#include <stdio.h>
#include <string.h>

// Function to find the largest of three numbers
void findLargest() {
    float x, y, z;
    
    printf("Enter the first number: ");
    scanf("%f", &x);
    printf("Enter the second number: ");
    scanf("%f", &y);
    printf("Enter the third number: ");
    scanf("%f", &z);
    
    float largest;
    if (x > y)
        largest = x;
    else
        largest = y;
    if (z > largest)
        largest = z;
    
    printf("The biggest number is %f\n", largest);
}

// Function to check if a character is a vowel
void checkVowel() {
    char character;
    
    printf("Enter a character: ");
    scanf(" %c", &character); // Consume the newline character
    
    switch (character) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("The character '%c' is a vowel.\n", character);
            break;
        default:
            printf("The character '%c' is not a vowel.\n", character);
            break;
    }
}

int main() {
    //findLargest();
    //checkVowel();
 char ch;
    printf("Enter the character you want to check: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("This character exists in the alphabet.\n");
    } else {
        printf("This character does not exist in the alphabet.\n");
    }
    return 0;
}
