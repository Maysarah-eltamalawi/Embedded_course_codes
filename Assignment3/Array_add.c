#include <stdio.h>

int main() {
    int array[100]; 
    int size, element, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert at (0-based index): ");
    scanf("%d", &position);

    // Check if position is valid
    if (position < 0 || position > size) {
        printf("Invalid position. Please enter a position between 0 and %d.\n", size);
        return 1; // Exit with an error code
    }

    // Shift elements to make space for the new element
    for (int i = size; i > position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the element at the specified position
    array[position] = element;
    size++; // Increase the size of the array

    // Print the updated array
    printf("Array after inserting %d at position %d:\n", element, position);
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
