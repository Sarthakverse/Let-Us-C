/*write a program to print all the possible combinations
of 1,2 and 3*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
            for(k=1;k<4;k++)
            {
                printf("%d%d%d ",i,j,k);
            }
        }
    }
    return 0;
}