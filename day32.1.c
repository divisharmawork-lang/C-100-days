Merge two arrays.

  #include <stdio.h>

int main()
{
    int a[3], b[3], c[6], i;

    printf("Enter first array:\n");
    for(i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    printf("Enter second array:\n");
    for(i = 0; i < 3; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < 3; i++)
    {
        c[i] = a[i];
        c[i + 3] = b[i];
    }

    printf("Merged array:\n");

    for(i = 0; i < 6; i++)
        printf("%d ", c[i]);

    return 0;
}
