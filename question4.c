#include <stdio.h>
#include<stdlib.h>
int main()
{
    char *str, ch;
    int j=1,i= 0;
    str=(char*)malloc(sizeof(char));
    printf("Enter string:\n");
    while (ch !='\n')
    {
        ch=getc(stdin);
        j++;
        str = (char*)realloc(str, j*sizeof(char));
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    printf("string is %s", str);
    free(str);
    return 0;
}