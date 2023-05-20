/*C PROGRAM IN WHICH TWO POINTERS POINTING A SAME VARIABLE*/

#include<stdio.h>
int main()
{
    int n;
    int *ptr1 = NULL,*ptr2 = NULL;
    ptr1 = &n;
    ptr2 = &n;

    printf("Enter the value of n :\n");
    scanf("%d",&n);

    printf("The value of n as pointed by ptr1 is %d\n",*ptr1);
    printf("The value of n as pointed by ptr2 is %d\n",*ptr2);

    return 0;
}