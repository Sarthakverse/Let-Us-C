/*sum upto 7 terms of (1/1!)+(2/2!)+(3/3!)+....*/
#include<stdio.h>
int main()
{
    int i,j;
    float sum=0.0;
    float factorial;
    for(i=1;i<=7;i++)
    {
        factorial=1.0;
        for(j=1;j<=i;j++)
        {
            factorial=factorial*j;
            sum=sum+i/factorial;
        }
        printf("%f\n",sum);
        return 0;
    }
}