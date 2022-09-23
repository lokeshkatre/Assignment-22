#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
    printf("Enter no. of elements in array:");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    scanf("%d",ptr+i);

    int max=*ptr,min=*ptr;
    for(int i=0;i<n;i++)
    {
        if(max<*(ptr+i))
        max=*(ptr+i);
        if(min>*(ptr+i))
        min=*(ptr+i);
    }
    printf("\n\n%d is maximum and %d is minimum\n",max,min);
    return 0;
}