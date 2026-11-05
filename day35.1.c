Find the second largest element in an array.

#include <stdio.h>

int main()
{
    int a[5], i, largest, second;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    largest = second = -9999;

    for(i = 0; i < 5; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}
