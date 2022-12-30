/*calculating ramesh's gross salary*/
#include<stdio.h>
int main()
{
    float basic_pay,dearnes_allowance,rent,gross_pay;
    printf("\nEnter basic pay of ramesh:");
    scanf("%f",&basic_pay);
    dearnes_allowance=0.4*basic_pay;
    rent=0.2*basic_pay;
    gross_pay=basic_pay+dearnes_allowance+rent;
    printf("bs is: %f\n",basic_pay);
    printf("da is: %f\n",dearnes_allowance);
    printf("rent: %f\n",rent);
    printf("gross pay: %f\n",gross_pay);
    return 0;

}
