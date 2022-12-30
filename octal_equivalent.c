/*Write a c program to receive an integer and find its octal equivalent*/
#include<stdio.h>
#include<math.h>
int main()
{
    int number,num,octal=0,q=0;
    printf("enter the number :-");
    scanf("%d",&number);
    while(number!=0)
    {
        num=number%8;
        octal=octal+num*pow(10,q);
        number=number/8;
        q++;
    }
    printf("the octal equivalent of entered number is : %d",octal);
    return 0;
}