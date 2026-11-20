
#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char ch;

    
    source = fopen("source.txt", "r");

    if (source == NULL)
    {
        printf("Source file not found!");
        return 1;
    }

   
    destination = fopen("destination.txt", "w");

    if (destination == NULL)
    {
        printf("Unable to create destination file!");
        fclose(source);
        return 1;
    }

   
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File copied successfully!");

   
    fclose(source);
    fclose(destination);

    return 0;
}

