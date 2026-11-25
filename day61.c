Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

  
#include <stdio.h>

int main()
{
    int a[100], n, k, i, j, first;

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
        first = 0;

        for(j = i; j < i+k; j++)
        {
            if(a[j] < 0)
            {
                first = a[j];
                break;
            }
        }

        printf("%d ", first);
    }

    return 0;
}
