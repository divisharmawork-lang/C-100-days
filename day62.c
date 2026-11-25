Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

  
#include <stdio.h>

int main()
{
    int a[100], n, i, sum, max;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sum = a[0];
    max = a[0];

    for(i = 1; i < n; i++)
    {
        if(sum + a[i] > a[i])
            sum = sum + a[i];
        else
            sum = a[i];

        if(sum > max)
            max = sum;
    }

    printf("Maximum sum = %d", max);

    return 0;
}
