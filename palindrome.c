//C PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS PALINDROME OR NOT USING FUNCTIONS AND POINTERS

#include<stdio.h>
int fun_palindrome(int *ptr)
{
    int num,digit,rev = 0;

    while (*ptr != 0)
    {
        digit = *ptr % 10;
        rev = (rev * 10) + digit;
        *ptr = *ptr / 10;
    }

    return rev;
    
}
int main()
{
    int num,x,temp;
    int *ptr = &num;

    printf("Enter a number\n");
    scanf("%d",ptr);

    temp = num;
    x = fun_palindrome(ptr);

    if(x == temp)
    {
        printf("Entered number %d is palindrome\n",temp);
    }
    else
    {
        printf("Entered number %d is not a palindrome\n",temp);
    }
    
    return 0;

}