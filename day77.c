Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

  
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("input.txt", "r");

    if(fp1 == NULL)
    {
        printf("File not found!");
        return 1;
    }

    fp2 = fopen("output.txt", "w");

    if(fp2 == NULL)
    {
        printf("Cannot open output file!");
        fclose(fp1);
        return 1;
    }

    while((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Text converted successfully!");

    return 0;
}
