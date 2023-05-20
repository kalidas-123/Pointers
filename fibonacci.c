/*C PROGRAM TO PRINT N FIBONACCI NUMBERS USING FUNCTIONS AND POINTERS*/

#include<stdio.h>

void fibonacci(int *n)
{
    int a,b,c;
    a = 0;
    b = 1;

    c = a + b;
    printf("Fibonacci numbers are as follows : %d %d %d",a,b,c);

    while(c < *n)
    {
        a = b;
        b = c;
        c = a + b;
        printf(" %d ",c);
    }
}
int main()
{
    int n;

    printf("Enter n value:\n");
    scanf("%d",&n);

    fibonacci(&n);

    return 0;
}