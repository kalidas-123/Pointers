//C PROGRAMS TO PRINT LARGER OF TWO NUMBERS USING FUNCTIONS AND POINTERS

#include<stdio.h>

void fun_larger(int *m,int *n)
{
    if(*m > *n)
        printf("%d is larger than %d\n",*m,*n);
    else 
        printf("%d is larger than %d\n",*n,*m);

}

int main()
{
    int p,q;
    int *m = &p;
    int *n = &q;

    printf("Enter two numbers\n");
    scanf("%d%d",m,n);

    fun_larger(m,n);

    return 0;

}