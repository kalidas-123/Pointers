//C PROGRAM FOR LINEAR SEARCH USING FUNCTIONS AND POINTERS

#include<stdio.h>
#define SIZE 20

void fn_read(int *a,int n)
{
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&a[i]);

}

void fn_display(int *a,int n)
{
    for(int i = 0 ; i < n ; i++)
        printf("%d\n",a[i]);
}

int fn_search(int *a,int n,int key)
{
    int flag = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(*(a + i) == key)
            flag++;
    }

    return flag;
}
int main()
{
    int a[SIZE],n,key,flag;

    printf("Enter array size\n");
    scanf("%d",&n);
    
    printf("Enter %d array elements\n",n);
    fn_read(a,n);

    printf("Array elements are\n");
    fn_display(a,n);

    printf("Enter key element to be searched\n");
    scanf("%d",&key);

    flag = fn_search(a,n,key);

    if(flag == 1)
    {
        printf("Successful search\n");
    }
    else
    {
        printf("Unsuccessful search\n");
    }
    
    return 0;

}