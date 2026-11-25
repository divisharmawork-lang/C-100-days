ake two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().


#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char source[100], dest[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", source);

    printf("Enter destination filename: ");
    scanf("%99s", dest);

    fp1 = fopen(source, "r");
    fp2 = fopen(dest, "w");

    if(fp1 == NULL || fp2 == NULL)
    {
        printf("File cannot be opened");
        if(fp1 != NULL)
            fclose(fp1);
        if(fp2 != NULL)
            fclose(fp2);
        return 1;
    }

    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully!");

    return 0;
}
