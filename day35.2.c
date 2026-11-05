Rotate an array to the right by k positions.

  #include <stdio.h>

int main()
{
    int a[5], i, j, k, temp;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for(j = 1; j <= k; j++)
    {
        temp = a[4];

        for(i = 4; i > 0; i--)
            a[i] = a[i-1];

        a[0] = temp;
    }

    printf("Rotated array:\n");

    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}
