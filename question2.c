#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,sum=0;
    printf("Enter number of values:");
    scanf("%d",&n);
    ptr=(int *)calloc(n,n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    printf("Enter values:\n");
    for(int i=0;i<n;i++)
      scanf("%d",ptr+i);

   for(int i=0;i<n;i++)
     sum=sum+*(ptr+i);
   
    printf("The average of values are %.2f",(float)sum/n);
    free(ptr);
    return 0;
    
}