#include<stdio.h>
#include<string.h>
void main(){
//Finding ASCII code of a character
printf("Enter a letter you to get its ASCII  ");
char ch ;
scanf("%c",&ch);
printf("The ASCII code of the character is %d",ch);



//swapping two numbers without temp

int x=10;
int y =9;
printf("The numbers before swapping: X = %d, Y = %d\n", x, y);

x = x + y;
y = x - y;
x = x - y;

    printf("The numbers after swapping: X = %d, Y = %d\n", x, y);

}