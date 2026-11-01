Reverse an array without taking extra space.

  #include <stdio.h>

int main()
{
    int a[5], i, temp;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 2; i++)
    {
        temp = a[i];
        a[i] = a[4-i];
        a[4-i] = temp;
    }

    printf("Reversed array:\n");

    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}
