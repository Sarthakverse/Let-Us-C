/*here we learn to create array using structures
and we will also access the array elements*/
#include<stdio.h>
struct point
{
    int x,y;
};
int main()
{
    struct point arr[10];
    arr[0].x=10;
    arr[0].y=20;
    printf("%d %d",arr[0].x,arr[0].y);
    return 0;
}