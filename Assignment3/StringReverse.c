#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char reversed[100];
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (int i = 0; i < length; i++) {
        reversed[length - i - 1] = str[i];
    }
    reversed[length] = '\0';  // Null-terminate the reversed string

    printf("Reversed string: %s\n", reversed);



    return 0;
}
