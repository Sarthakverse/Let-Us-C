/*we use abs(num)...to find absolute value*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int num,abs_num;
    printf("num =");
    scanf("%d",&num);
    abs_num=abs(num);
    printf("absolute value of num is %d",abs_num);
    return 0;
}