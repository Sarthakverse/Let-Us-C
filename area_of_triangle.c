/*lets find out area of triangle*/
#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c;
    printf("enter a b and c:");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    float area_of_triangle=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f\n",area_of_triangle);
    return 0;
}