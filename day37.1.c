Find the sum of each row of a matrix and store it in an array.

  #include <stdio.h>

int main()
{
    int a[3][3], sum[3];
    int i, j;

    printf("Enter 9 elements:\n");

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < 3; i++)
    {
        sum[i] = 0;

        for(j = 0; j < 3; j++)
            sum[i] = sum[i] + a[i][j];
    }

    printf("Row sums:\n");

    for(i = 0; i < 3; i++)
        printf("%d ", sum[i]);

    return 0;
}
