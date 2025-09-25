//A program to check a customer's loan qualification 
/*
    NAME:DENNIS KARIUKI NGANGA
    REG NO:CT101/G/26473/251
*/
#include<stdio.h>
//main function
int main()
{
    //A welcome message to the customer 
    printf("  WELCOME TO RENCE LYS BANK\n");
    printf("  To continue please enter the following details\n");
    int age ;
    printf("  Enter Your Age\n"); //Prompts the users age
    scanf("%d",&age );
       if (age >=21){                       //Age validation
         printf("  Almost there\n");
            int income;
             printf("  Enter Your Annual Income\n");// Prompts the users annual income
              scanf("%d",&income);
            if (income>=21000){  //Validates customers Annual income
           printf("  Congratulations, you qualify for a loan ");
          }else{
       printf("  Unfortunately,we are unable to offer you a loan at this time");
        }
     } else {
 printf("  Unfortunately,we are unable to offer you a loan at this time");
    }
}
    
    