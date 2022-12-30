/*we will print ascii values*/
#include<stdio.h>
int main()
{
    int x=0;
    char y;
    while(x<256)
    {
       y=x;
       printf("%d %c\n",x,y);
       x++;
    }
}