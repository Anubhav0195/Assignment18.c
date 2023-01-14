#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int value;
    printf("Enter the string:");
    fgets(str,sizeof str,stdin);
    value=strupr(str);
    printf("The upper version of the string is %s",value);
    return 0;

}