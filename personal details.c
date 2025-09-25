//A program for Personal Details
/*
Name   : Dennis Kariuki Nganga
Reg No :CT101/G/26473/25

*/

#include <stdio.h>
int main()
{
    float height ;
    printf("Enter your height (in metres).\n");// Prompt height
    scanf("%f", &height);
    
    double balance ;
    printf("Enter your balance\n");// Prompt Balance
    scanf("%lf",& balance);
    
    int number;
    printf("Enter Your phone number(+254)\n");//Prompt Phone number
    scanf("%d", &number);
    
       printf("Your Height is      %f m\n " ,height );//Otputs User Height in Metres
      printf("Account Balace   Ksh %lf\n" , balance); // Outputs User Balance
       printf("Phone number     +254%d" ,number); //Outputs User Phone Number
    
  return 0;
    
}
