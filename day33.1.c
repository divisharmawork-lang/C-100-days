Search in a sorted array using binary search.

  #include <stdio.h>

int main()
{
    int a[5], i, n;
    int low = 0, high = 4, mid;
    int found = 0;

    printf("Enter 5 sorted numbers:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter number to search: ");
    scanf("%d", &n);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == n)
        {
            found = 1;
            break;
        }
        else if(n > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found == 1)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
