#include "stdio.h"
#include "math.h"
#include "string.h"
int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void print_primes(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
}

int Factorial(int a)
{
    int result = 1;
    if (a <= 1)
        return 1;
    else
        return a * Factorial(a - 1);
}

void Reverse(char a[], int start, int end) {
    if (start >= end) {
        return;
    } else {
        char temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        Reverse(a, start + 1, end - 1);
    }
}

int Power(int num,int power){
    int result;
    if(power==0)
    return 1;
    else{
return num*Power(num,power-1);
    }
}

int main()
{
    // int start, end;
    // printf("Enter two numbers: ");
    // scanf("%d %d", &start, &end);
    // printf("Prime numbers between %d and %d are: ", start, end);
    // print_primes(start, end);
    // printf("\n");
    // int fact;
    // printf("Please enter a number to get its factorial\n");
    // scanf("%d", &fact);
    // printf("The factorial of %d is %d", fact, Factorial(fact));
    // char str[100];
    // printf("please enter a string \n");
    // fgets(str, sizeof(str), stdin);
    // int end = strlen(str) - 1;
    // int start = 0;
    // Reverse(str, start, end);
    // printf("%s", str);
    int num;
    int p;
    printf("Enter the number you want and the power\n");
    scanf("%d %d",&num,&p);
    printf("The result is %d",Power(num,p));
    return 0;
}
