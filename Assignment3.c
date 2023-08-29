#include <stdio.h>

void sum_matrix(int a[2][2], int b[2][2])
{
    int result[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            result[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Resultant matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[2][2] = {1, 2, 3, 4};
    int b[2][2] = {1, 2, 3, 4};
    sum_matrix(a, b);
    return 0;
}
