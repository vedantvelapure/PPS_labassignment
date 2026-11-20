#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};

int main()
{
    struct Student s[100];//creates an array that stores the results of 100 students
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Accept student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter marks of 3 subjects:\n");

        s[i].total = 0;

        for(int j = 0; j < 3; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);

            s[i].total = s[i].total + s[i].marks[j];
        }

        s[i].percentage = s[i].total / 3.0;
    }

    // Display student results
    printf("\n\nSTUDENT RESULTS\n");

    printf("\nRoll No\tName\tSub 1\tSub 2\tSub 3\tTotal\tPercentage\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f\n",
        s[i].roll_no,
        s[i].name,
        s[i].marks[0],
        s[i].marks[1],
        s[i].marks[2],
        s[i].total,
        s[i].percentage);
    }

    return 0;
}
