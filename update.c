/*C PROGRAM TO UPDATE THE VALUE OF VARIBLE USING FUNCTIONS(CALL BY REFERENCE) AND USING POINTERS*/

#include<stdio.h>
void fn_update(int *m,int *n)
{
    *m = *m + 1;
    *n = *n +1;
}
int main()
{
    int m ,n;
    printf("Enter the values of m and n:\n");
    scanf("%d%d",&m,&n);

    fn_update(&m,&n);                           //call by reference

    printf("The updated values of m and n are %d and %d\n",m,n);

    return 0;
}