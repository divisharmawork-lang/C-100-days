Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

  
#include <stdio.h>

int main()
{
    int a[100], n, k, i, j, max;

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

    for(i = 0; i <= n-k; i++)
    {
        max = a[i];

        for(j = i; j < i+k; j++)
        {
            if(a[j] > max)
            {
                max = a[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}
