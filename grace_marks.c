/* 

Write a c program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the 
number of students he has failed in. Use the following logic:
-If the student gets first class and the number of subjects he failed
 in is greater than 3, then he does not get any grace. 
 Otherwise the grace is of 5 marks per subject.
-If the student gets second class and the number of subjects he 
failed in is greater than 2, then he does not get any grace. 
 Otherwise the grace is of 4 marks per subject.
-If the student gets third class and the number of subjects he 
failed in is greater than 1, then he does not get any grace. 
 Otherwise the grace is of 5 marks.*/
 #include<stdio.h>
 int main()
 {
   
    
        int class,fail,pass;
    printf("(1)first class\n");
    printf("(2)second class\n");
    printf("(3)third class\n");
    printf("enter your choice:");
    printf("\nsubjects he failed in :\n");
    scanf("%d",&fail);
    scanf("%d",&class);
    switch(class)
    {
        case 1:
        if(fail>3)
        printf("he will not get grace marks");
        else
        printf("he will get +5 grace marks in each subject");
        break;
        case 2:
        if(fail>2)
        printf("he will not get grace marks");
        else
        printf("he will get +4 grace marks in each subject");
        break;
        case 3:
        if(fail>1)
        printf("he will not get grace marks");
        else
        printf("he will get +5 grace marks in each subject");
        break;
        default:
        printf("invalid class:)");
    }
   
   return 0;
 }