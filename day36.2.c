Find the sum of all elements in a matrix.

  #include <stdio.h>

int main()
{
    int a[3][3], i, j, sum = 0;

    printf("Enter 9 elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}
