#include<stdio.h>



long long int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}



int main()
{
    int n,i;
    long long int f=1;
    printf("Enter a number: ");
    scanf("%d",&n);


    if(n<0)
    {
        printf("Invalid input");
        return 0;
    }


    for(i=1;i<=n;i++)
    {
        f=f*i;
    }

    printf("Factorial without recursion=%lld\n",f);
    printf("Factorial with recursion=%lld",fact(n));

    return 0;
}
