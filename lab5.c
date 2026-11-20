#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice, result;

        printf("\n--- STRING OPERATIONS ---\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            printf("Exiting program.\n");
        }

        switch (choice)
        {
            case 1:
                printf("Enter a string: ");
                scanf("%99s", str1);

                printf("%lu",strlen(str1));
                break;

            case 2:
                printf("Enter a string: ");
                scanf("%99s", str1);

                strcpy(str2, str1);

                printf("Copied string = %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%99s", str1);

                printf("Enter second string: ");
                scanf("%99s", str2);

                strcat(str1, str2);

                printf("Concatenated string = %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%99s", str1);

                printf("Enter second string: ");
                scanf("%99s", str2);

                result = strcmp(str1, str2);

                if (result == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
        return 0;
    }





