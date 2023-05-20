//C PROGRAM TO SWAP TWO NUMBERS USING POINTERS AND FUNCTIONS

#include<stdio.h>
void fun_swap(int *m , int *n)
{
    int temp;

    temp = *m;
    *m = *n;
    *n = temp;

    printf("Swapped numbers are %d and %d\n",*m,*n);
    
}

int main()
{
    int *m,*n,a,b;
    m = &a;
    n = &b;

    printf("Enter two numbers\n");
    scanf("%d%d",m,n);

    fun_swap(m,n);

    return 0;

}