/*difficult question of star pattern*/
#include<stdio.h>
int main()
{
  int i,j,n;
  printf("enter n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)  //row
  {
    
    for(j=1;j<=n;j++)  //spaces
    {
       if(j<i)
       {
        printf(" ");
        continue;
       }
       else 
       printf("*");
    }
    printf("\n");
  }  
}