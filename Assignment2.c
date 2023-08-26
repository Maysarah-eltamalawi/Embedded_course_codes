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

//function to check whether the char in the alphabet or not 
void checkAlphabet(){
     char ch;
    printf("Enter the character you want to check: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("This character exists in the alphabet.\n");
    } else {
        printf("This character does not exist in the alphabet.\n");
    }
}

//Factorial function
void calculateFactorial() {
    int num;
    unsigned int factorial;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        factorial = 1;

        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        printf("Factorial of %d is %d\n", num, factorial);
    }
}

//Calculator function
void calculator() {
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: \n");
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }
}



int main() {
    //findLargest();
    //checkVowel();
    //checkAlphabet();
    //calculateFactorial();
    calculator();
    return 0;
}
