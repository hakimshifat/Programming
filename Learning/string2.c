#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[30] = "203033 this is test99";
    char *ptr;
    long int ret;

    ret= strtol(str , &ptr, 10);
    printf("The number (unsigned long integer) is %ld\n",ret);
    printf("String part is |%s|",ptr);
    return 0;
}