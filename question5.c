#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[]={1,5,6,3,4,3};
    int *ptr,sum=0;
    ptr=&arr[0];
    for(int i=0;i<6;i++)
    {
        printf("%d ",*(ptr+i));
        sum=sum + *(ptr+i);
    }
    printf("\nThe sum of elements are %d",sum);
    free(ptr);
    return 0;

}