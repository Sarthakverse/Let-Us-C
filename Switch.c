/*Write a menu driven c program which has following options:

Factorial of a number
Prime or not
Odd or even
Exit
Once a menu item is selected the appropriate action should be taken and once this action is finished, the menu should reappear. Unless the user selects the ‘Exit’ option the program should continue to run.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int choice,num,i,fact;
    while(1)
    {
        printf("1) factorial\n");
        printf("2) odd or even\n");
        printf("3) exit\n");
        printf("4)your's choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter num:");
            scanf("%d",&num);
            fact=1;
            for(i=1;i<=num;i++)
            {
                fact=fact*i;
            }
            printf("%d\n",fact);
            break;
            case 2:
            printf("enter number:");
            scanf("%d",&num);
            if(num%2==0)
            printf("even\n");
            else
            printf("odd\n");
            break;
            case 3:
            exit(0);
            default:printf("wrong choice\n");
        }
    }
    return 0;
}