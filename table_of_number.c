/*write table as depicted 2*1=2
                          2*2=4
                          2*3=6 */
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number whose table you want:");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        int multi;
        multi=i*num;
        printf("%d*%d=%d\n",num,i,multi);

    }
    return 0;

}