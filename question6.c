#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
    printf("Enter number of values:");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    int max=*ptr;
    for(int i=0;i<n;i++)
    {
        if(max<*(ptr+i))
        max=*(ptr+i);
    }
    printf("\nThe largest element is %d",max);
    free(ptr);
    return 0;
}