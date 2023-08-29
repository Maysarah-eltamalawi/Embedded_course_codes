#include "stdio.h"
#include "string.h"
int main()
{
    char str[100];
    char ch;
    int no_occur = 0;
    printf("Please enter a String : ");
    scanf("%s", &str);
    getchar();//to remove the new  line character in scanf()
    printf("Please enter the character you want to find :");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(str); i++)

    {

        if (str[i] == ch)
            no_occur = no_occur + 1;
    }
    printf("The Frequency of occurance is equal to %d ", no_occur);
    return 0;
}