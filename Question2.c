#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    char Reverse=0;
    printf("Enter the string");
    fgets(str,sizeof str,stdin);
    Reverse = strrev(str);
    printf("The reverse string is %s\n",str);
    return 0;
}