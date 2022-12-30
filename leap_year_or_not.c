#include<stdio.h>
void leapyear(int);
int main()
{
    int year;
    printf("year=");
    scanf("%d",&year);
    leapyear(year);
    return 0;
}
void leapyear(int year)
{
   if(year%4==0&&year%100!=0)
   printf("leap year");
   else if(year%400==0)
   printf("leap year");
   else
   printf("not leap year");
}
