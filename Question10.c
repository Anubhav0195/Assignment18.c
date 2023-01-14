#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int count,i,j;
    printf("Enter the string: ");
    fgets(str,sizeof str,stdin);
    for(i=0;i<strlen(str);i++)
    {
        for(j=i+1;j<strlen(str);j++)
        {
            if(str[i] == str[j] && str[i] != ' ')
            {
                count++;
                str[j]='0';
            }
        }
        if(count >1 && str[i]!='0')
        printf("%C\n",str[i]);
    }
    return 0;
}