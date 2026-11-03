Insert an element in a sorted array at the appropriate position.

  #include <stdio.h>

int main()
{
    int a[10], n, i, x, pos;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    pos = n;

    for(i = 0; i < n; i++)
    {
        if(x < a[i])
        {
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--)
        a[i] = a[i-1];

    a[pos] = x;
    n++;

    printf("New array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
