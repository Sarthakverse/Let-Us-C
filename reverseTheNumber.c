/*15323==>32351
also check whether reversed number is equal or not*/
#include<stdio.h>
int main()
{
    int num,rem;
    printf("number :");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        printf("%d",rem);
        num=num/10;
    }
   
    return 0;
}   