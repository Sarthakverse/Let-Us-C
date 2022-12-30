//POINTER TOPIC
/*demonstartion of function call by value*/
#include<stdio.h>
int a,b;
void swapv(int x,int y);
int main()
{
   
   a=10;
   b=20;
    swapv(a,b);
    printf("a=%d and b=%d",a,b);
   return 0;
   /*what u will observe is that VALUE!! 
of a and b dont change even after swapping..its because 
the value of each actual argument in the call is copied
into corresponding formal of the called function*/
}
void swapv(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d and y=%d\n",x,y);
}