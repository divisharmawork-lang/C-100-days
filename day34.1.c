#include <stdio.h>

int main()
{
    int a[10], n, i, x, pos;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element: ");
    scanf("%d", &x);

    printf("Enter position: ");
    scanf("%d", &pos);

    for(i = n; i >= pos; i--)
        a[i] = a[i-1];

    a[pos-1] = x;
    n++;

    printf("New array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
