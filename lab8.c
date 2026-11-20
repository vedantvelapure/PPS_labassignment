
#include <stdio.h>

void swap(long *a, long *b)
{
    long temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    long num1, num2;

    printf("Enter two numbers: ");
    scanf("%ld %ld", &num1, &num2);

    printf("Before swapping:\n");
    printf("num1 = %ld, num2 = %ld\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping:\n");
    printf("num1 = %ld, num2 = %ld\n", num1, num2);

    return 0;
}
