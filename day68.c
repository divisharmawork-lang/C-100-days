Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number


#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0, total;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    total = n * (n + 1) / 2;

    printf("Missing number = %d", total - sum);

    return 0;
}
