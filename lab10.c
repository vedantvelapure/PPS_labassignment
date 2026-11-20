
#include <stdio.h>

int main()
{
    int year, month, days, day, start;
    int i, j;

    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int monthDays[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    printf("Enter year: ");
    scanf("%d", &year);

    // Check leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        monthDays[1] = 29;
    }

    // Calculate starting day of the year
    start = (year + (year - 1) / 4 - (year - 1) / 100
             + (year - 1) / 400) % 7;

    for (month = 0; month < 12; month++)
    {
        printf("\n\n       %s %d\n", months[month], year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        days = monthDays[month];

        for (i = 0; i < start; i++)
        {
            printf("    ");
        }

        for (day = 1; day <= days; day++)
        {
            printf("%4d", day);

            if ((day + start) % 7 == 0)
            {
                printf("\n");
            }
        }

        printf("\n");

        start = (start + days) % 7;
    }

    return 0;
}

