Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

  
#include <stdio.h>

int main()
{
    int a[100], n, k, i, sum = 0, max;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if(k < 1 || k > n)
    {
        printf("Invalid k");
        return 0;
    }

    for(i = 0; i < k; i++)
    {
        sum = sum + a[i];
    }

    max = sum;

    for(i = k; i < n; i++)
    {
        sum = sum + a[i] - a[i-k];

        if(sum > max)
        {
            max = sum;
        }
    }

    printf("Maximum sum = %d", max);

    return 0;
}
