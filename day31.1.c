Search for an element in an array using linear search.

  #include <stdio.h>

int main()
{
    int a[5], i, n, found = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter number to search: ");
    scanf("%d", &n);

    for(i = 0; i < 5; i++)
    {
        if(a[i] == n)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
