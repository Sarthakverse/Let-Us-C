/*pointer concept*/
/*Write a function that receives 5 integers and return the sum, 
average and standard deviation of these numbers.
Call this function from main() and print the results in main().*/
#include<stdio.h>
#include<math.h>

    
void fun(int*,int*,double*);
int main()
{
    int sum;
    int avg;
    double sd;
   fun(&sum,&avg,&sd);
    printf("sum is %d\navg is %d\nsd is %lf",sum,avg,sd);
    return 0;
}
void fun(int*sum,int*avg,double*sd)
{
    int a,b,c,d,e;
    printf("enter the integers a,b,c,d,e :");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    *sum=a+b+c+d+e;
    *avg=*sum/5;
    *sd=sqrt((pow((a-*avg),2))+pow((b-*avg),2)+\
    pow((c-*avg),2)+pow((d-*avg),2)+pow((e-*avg),2))/5;
}