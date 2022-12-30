/*C program to generate all pythagorean triplets
 with side lengths less than or equal to 30*/
 #include<stdio.h>
 int main()
 {
    int a,b,c;
    for(a=1;a<=30;a++)
    {
        for(b=1;b<=30;b++)
        {
           for(c=1;c<=30;c++)
           {
            if(c*c==a*a+b*b)
            printf("(%d,%d,%d)\n",a,b,c);
           }
        }
    }
 }