Reverse each word in a sentence without changing the word order.

  #include <stdio.h>
#include <string.h>

int main()
{
    char str[100], word[50];
    int i = 0, j, k = 0;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            word[k] = str[i];
            k++;
        }
        else
        {
            for(j = k - 1; j >= 0; j--)
                printf("%c", word[j]);

            if(str[i] == ' ')
                printf(" ");

            k = 0;
        }

        i++;
    }

    return 0;
}
