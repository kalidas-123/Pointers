/*C PROGRAM IN WHICH A POINTER POINTING TWO DIFFERENT VARIABLES*/

#include<stdio.h>
int main()
{
    int m,n;
    int *ptr = NULL;

    printf("Enter the values of m and n:");
    scanf("%d%d",&m,&n);

    ptr = &m;
    printf("m = %d\n",*ptr);

    ptr = &n;
    printf("n = %d\n",*ptr);

    return 0;

}