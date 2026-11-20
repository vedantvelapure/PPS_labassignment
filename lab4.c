#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],sum[10][10],sub[10][10];
    int r,c,i,j;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&r,&c);

    printf("Enter the elements of matrix a:");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix b:");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("addition of matrices:");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("sum of matrices is:");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }
    printf("Subtraction of matrices:");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("subtraction is:");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}
