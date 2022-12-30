/* find factorial */
#include<stdio.h>
int x;
int fact(int);
int main()
{
  printf("enter x:");
   scanf("%d",&x);
   fact(x);
}
int fact(int x)
{
    int multi=1;
    for(int i=1;i<=x;i++)
    {
      multi=multi*i; 
    }
    printf("%d",multi);
    return 0;
}