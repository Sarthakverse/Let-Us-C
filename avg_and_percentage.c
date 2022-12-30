/*pointer concept*/
/*function that returns avg and percentage*/
#include<stdio.h>
void avper(int,int,int,float *,float *);
int main()
{
    float avg,per;
    int x,y,z;
    printf("enter x y and z:");
    scanf("%d %d %d",&x,&y,&z);
    avper(x,y,z,&avg,&per);
    printf("avg is %lf and percentage is %lf",avg,per);
    return 0;
}
void avper(int x,int y,int z,float *avg,float *per)
{
    *avg=(x+y+z)/3.0; // 3.0 and 3 will give diff results
    *per=*avg;
}