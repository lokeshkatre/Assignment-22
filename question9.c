#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
    printf("Enter no. of bytes:");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    if(ptr=NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    
}