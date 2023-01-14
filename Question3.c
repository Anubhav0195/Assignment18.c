#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000];
    char str2[1000];
    int value;
    printf("Enter the first string:");
    fgets(str1,sizeof str1,stdin);
    printf("Enter the second string:");
    fgets(str2,sizeof str2,stdin);
    value = strcmp(str1,str2);
    if(value==0)
    printf("String are same:");
    else
    printf("String are not same");
    return 0;
}