/*using recurssion find sum of 1st 25 natural nos*/
#include<stdio.h>
#include<stdlib.h>
void sum(int);
int main()
{
    int s=1;
    system("cls");
    sum(s);
    
    return 0;
}
void sum(int s)
{
    for(int i=1;i<=25;i++)
    {
        s=s+i;
        printf("%d ",i);
    }
    printf("\nsum of first 25 nos is =%d",s);
}