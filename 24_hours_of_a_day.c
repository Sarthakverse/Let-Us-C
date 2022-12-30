/*Write a program to print 24 hours of 
day with suitable suffixes 
like AM, PM, Noon and Midnight*/
#include<stdio.h>
int main()
{
    int h;
    for(int h=0;h<12;h++)
    {
       printf("%d AM\n",h);
    }
    for(int h=12;h<=24;h++)
    {
       if(h==24)
       printf("%d AM",h-12);
       else
        printf("%d PM\n",h-12);
    }
    
    
}