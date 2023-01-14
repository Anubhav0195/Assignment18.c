#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int l=0,i;
  
    printf("Enter the string:");
    gets(str);
    l= strlen(str);
    for(i=0;i<l/2;i++)
    {
        if(str[i] != str[l-i-1])
        {
             printf("String is not a palidrome:");
             break;
        }
       
        
    }
    if(i==l/2)
    {
        printf("String is palidrome");
    }
   
    return 0;

}