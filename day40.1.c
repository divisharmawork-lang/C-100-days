Perform diagonal traversal of a matrix.

#include <stdio.h>

int main()
{
    int a[3][3], i, j, k;

    printf("Enter 9 elements:\n");

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal:\n");

    for(k = 0; k <= 4; k++)
    {
        for(i = 0; i < 3; i++)
        {
            j = k - i;

            if(j >= 0 && j < 3)
                printf("%d ", a[i][j]);
        }
    }

    return 0;
}  
