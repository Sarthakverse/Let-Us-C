//POINTER TOPIC
/*call bye refrence*/
#include<stdio.h>
void swapv(int *,int *);

int main()
{
   int a=10;
   int b=20;
   swapv(&a,&b);
   printf("a=%d and b=%d",a,b);
   return 0;
   /*now you will see that this time the output has changed
    and values of a and b have got swapped*/
}
void swapv(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}