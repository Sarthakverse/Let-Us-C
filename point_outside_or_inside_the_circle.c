/*    equation of circle is
      x^2+y^2+2gx+2fy+c=0
 where (-g,-f)=centre and r=sqrt(g^2+f^2-c)   */
#include<stdio.h>
int main()
{
    int x1,y1,check;
    printf("write (x1,y1) :");
    scanf("%d %d",&x1,&y1);
    printf("center of the circle is(2,3) and radius is 5\n");
    check=(x1-2)*(x1-2)+(y1-3)*(y1-3)-25;
    if(check>0)
    printf("point lies outside");
    else if(check==0)
    printf("point lies on circle");
    else
    printf("point lies inside circle");
    return 0;

}