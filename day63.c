Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.


#include <stdio.h>

int main()
{
    int a[100], n, k, i, j, temp;

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

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Kth smallest element = %d", a[k-1]);

    return 0;
}
