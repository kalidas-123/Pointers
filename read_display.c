/*C PROGRAM TO READ AND DISPLAY AN ELEMENT USING POINTERS*/

#include<stdio.h>
int main()
{
    int n;
    int *ptr = &n;

    printf("Enter the value of n :\n");
    scanf("%d",ptr);

    printf("The value of n is %d\n",*ptr);

    (*ptr)++;
    printf("The incremented value of n is %d\n",*ptr);
    
}