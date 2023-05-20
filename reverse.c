/*C PROGRAM TO REVERSE A STRING*/

#include<stdio.h>
#include<string.h>
#define SIZE 30
void fun_rev(char *str)
{
    int i, temp,len;

    len = strlen(str);
    for(i = 0 ; i < len / 2 ; i++)
    {
        temp = str[i];
        str[i] = str[len - i -1];
        str[len - i -1] = temp;
    }
}
int main()
{
    char str[SIZE];
    
    printf("Enter the string\n");
    gets(str);

    printf("String before reversing is %s\n",str);

    fun_rev(str);
    printf("String after reversing is %s\n",str);

    return 0;
}