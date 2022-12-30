/*pointer and function calling concept*/
/*Given three variables x, y, z write a function to circularly 
shift their values to right. In order words if x=5, y=8, z=10, 
after circular shift y=5, z=8, x=10. Call the function with 
variables a, b, c to circularly shift values*/
#include<stdio.h>
void shift(int*,int*,int*);
int main()
{
     
     int x=5,y=8,z=10;
    shift(&x,&y,&z);
    printf("x=%d,y=%d,z=%d",x,y,z);
    return 0;
}
void shift(int*x,int*y,int*z)
{
    int t;
    t=*z;
    *z=*y;
    *y=*x;
    *x=t;
}