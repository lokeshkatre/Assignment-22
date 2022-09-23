#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)malloc(sizeof(int));
    *ptr=10;
    printf("Before freeing the pointer :%d\n",ptr);
    free(ptr);
    printf("After freeing the pointer :%d\n",ptr);
}