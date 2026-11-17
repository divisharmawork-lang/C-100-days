Check if two strings are anagrams of each other.

  #include <stdio.h>

int main()
{
    char a[100], b[100];
    int count[26] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    for(i = 0; a[i] != '\0'; i++)
        count[a[i] - 'a']++;

    for(i = 0; b[i] != '\0'; i++)
        count[b[i] - 'a']--;

    for(i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
