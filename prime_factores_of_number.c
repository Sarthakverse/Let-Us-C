/*we will find prime factors of number*/
/*eg:- 24=2*2*2*3; */
#include<stdio.h>
void prime(int);
int main()
{
    int x;
    printf("enter x:");
    scanf("%d",&x);
   prime(x);
    return 0;
}
void prime(int x)
{
   for(int i=2;x>1;i++)
   {
    while(x%i==0)
    {printf("%d ",i);
    x=x/i;}
    
   }
}