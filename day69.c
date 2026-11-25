Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

  
#include <stdio.h>

int main()
{
    int a[100], freq[1001] = {0};
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] < 0 || a[i] > 1000)
        {
            printf("Invalid element");
            return 0;
        }

        if(freq[a[i]] == 1)
        {
            printf("Repeated element = %d", a[i]);
            return 0;
        }

        freq[a[i]] = 1;
    }

    return 0;
}
