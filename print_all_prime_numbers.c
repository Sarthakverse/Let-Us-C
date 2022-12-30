/*program is to print all prime number between
1 and 500*/
#include<stdio.h>
int main()
{
  int i,n=1;
  printf("prime numbers between 1 and 500 are:\n");
  for(n=1;n<=500;n++)
  {
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        break;
    }
    if(i==n)
    printf("%d ",n);
  }
  return 0;
    
  }
  
