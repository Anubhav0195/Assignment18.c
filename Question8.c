#include<stdio.h>
int main()
{
    char str[1000];
    int i,count =0;
    printf("Enter the string:  ");
    fgets(str,sizeof str,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i] == ' ' )
        count++;
    }
    if(i>0)
    count++;
     printf("The words in the string is %d\n",count);
    return 0;
}