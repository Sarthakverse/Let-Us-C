/*prime number finding*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter number :-");
    scanf("%d",&num);
    if(num==0||num==1)
    printf("not prime");
    if(num==2)
    printf("prime");
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {printf("not prime");
        break;}
        else
        printf("prime");
        break;
    }
    return 0;
}