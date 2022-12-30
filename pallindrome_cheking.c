#include<stdio.h>
#include<string.h>

int main()
{
  char num[100];
    int len;
    printf("enter num:");
    scanf("%s",&num);
    
    len=strlen(num);
    for(int i=0;i<=len/2;i++)
    {
        if(num[i]==num[len-1-i])
        continue;
        else 
        printf("false");
        return 0;
    }
    printf("true");
    return 0;
}