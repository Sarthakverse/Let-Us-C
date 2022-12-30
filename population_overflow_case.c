#include<stdio.h>
int main()
{
    long int pop;
    pop=100000;
    for(int i=10;i>0;i--)
    {
      pop=pop-pop*10/100;
      printf("%ld ",pop);  
    }
    return 0;
   

}