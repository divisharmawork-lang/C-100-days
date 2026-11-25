Write a program to take a string input. Change it to sentence case.


#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[100];
    int i, start = 1;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++)
    {
        if(start == 1 && isalpha(s[i]))
        {
            s[i] = toupper(s[i]);
            start = 0;
        }
        else
        {
            s[i] = tolower(s[i]);
        }

        if(s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            start = 1;
        }
    }

    printf("Sentence case: %s", s);

    return 0;
}
