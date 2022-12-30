#include<stdio.h>
float power(float,int);
int main()
{
    float x,pow;
    int y;
    printf("enter x:");
    scanf("%f",&x);
    printf("enter y:");
    scanf("%d",&pow);
    pow=power(x,y);
    printf("%f to the power %d is %f",x,y,pow);
    return 0;
}
float power(float x,int y)
{
   int i;
    float p=1;
    for(i=1;i<=y;i++)
    {
        p=p*x;
        return(p);
    }
}