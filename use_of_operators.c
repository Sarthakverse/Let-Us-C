/*demonstration of operators*/
#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,per;
    printf("enter marks :");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    per=(s1+s2+s3+s4+s5)/500*100;
    if(per>=60)
    printf("first division\n");
    else if(50<per<59)
    printf("second division\n");
    else if(40<per<50)
    printf("third division\n");
    else
    printf("you need to work harder dude:)!!");
    return 0;
}/*use of if-elseif-else...reduces the identation of statements*/