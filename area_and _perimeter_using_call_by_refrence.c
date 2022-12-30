/*return statement can return only one value at at time
but we can overcome this limitation */
#include<stdio.h>
void areaperi(int,float*,float*);
int main()
{
    int r;
    float area,peri;
    printf("enter radius r:");
    scanf("%d",&r);
    areaperi(r,&area,&peri);
    printf("area=%f\n",area);
    printf("perimeter=%f\n",peri);
    return 0;
}
void areaperi(int r,float *area,float *peri)
{
    *area=3.14*r*r;
    *peri=2*3.14*r;
}