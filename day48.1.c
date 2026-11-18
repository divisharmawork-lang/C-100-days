Check if one string is a rotation of another.

  #include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    strcpy(temp, a);
    strcat(temp, a);

    if(strlen(a) == strlen(b) && strstr(temp, b))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
