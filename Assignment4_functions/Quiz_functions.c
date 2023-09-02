#include <stdio.h>
#include <stdlib.h>
// Function to swap two arrays of different lengths
void swapArrays(int arr1[], int size1, int arr2[], int size2)
{
    int maxSize = (size1 > size2) ? size1 : size2;
    int temp[maxSize]; // Temporary array with the maximum size

    // Copy elements from arr1 to temp
    for (int i = 0; i < size1; i++)
    {
        temp[i] = arr1[i];
    }

    // Copy elements from arr2 to arr1
    for (int i = 0; i < size2; i++)
    {
        arr1[i] = arr2[i];
    }

    // Copy elements from temp to arr2
    for (int i = 0; i < size1; i++)
    {
        arr2[i] = temp[i];
    }
}

void asciiArrayToNumbers(char asciiArray[], int length)
{
    for (int i = 0; i < length; i++)
    {
        // Subtract the ASCII value of '0' to get the integer value
        int number = asciiArray[i] - '0';
        printf("Character '%c' as a number: %d\n", asciiArray[i], number);
    }
}

void Reverse(int a[], int size)
{
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = a[size - 1 - i];
    }
    for (int i = 0; i < size; i++)
    {
        a[i] = temp[i];
    }
    printf("The array after swap: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

void lastIntegerIndex(int arr[], int size, int target)
{
    int lastIndex = -1; // Initialize the index to -1 (not found) by default.

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            lastIndex = i; // Update the index when the target integer is found.
        }
    }
    if (lastIndex != -1)
        printf("The last occurance of %d is %d \n", target, lastIndex);
    else
        printf("This digit had not occured in the array");
}

void leastSignificantBit(int a)
{
    int result = a & 8;
    if (result == 8)
        printf("The 4th least significant bit is 1 \n");
    else
        printf("The 4th least significant bit is 0 \n");
}

void Clear(int num, int position)
{
    printf("the number before clearing %d \n", num);
    num &= ~(1 << position);
    printf("the number after clearing %d \n", num);
}

int main()
{
    // char asciiArray[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    // int length = sizeof(asciiArray) / sizeof(asciiArray[0]);

    // asciiArrayToNumbers(asciiArray, length);
    // int a[] = {1, 2, 3, 4, 5, 6};
    // int size = sizeof(a) / sizeof(a[0]);

    // Reverse(a, size);
    // int a[]={1,2,3,4,5,6};
    // lastIntegerIndex(a,6,5);
    // leastSignificantBit(8);
    // leastSignificantBit(27);
    // leastSignificantBit(17);
    Clear(42, 3);
    return 0;
}
