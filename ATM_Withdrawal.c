/*
NAME:DENNIS KARIUKI NGANGA
REG NO: CT101/G/26473/25
DESCRIPTION :A C program that allows withdrawals until account balance reaches zero
*/
#include<stdio.h>
 int main()
{
	int withdrawal_amount,current_balance;//variable declaration
	current_balance=23000;//balane initialisation
	
	 while (current_balance>0)
 {
	  	 printf("\nCurrent balance :%d\n",current_balance);//prints the current balance
		 printf("Enter Amount You Want To Withdraw :\n");//prompts the user to enter the amount to be withdrawn
		 scanf("%d",&withdrawal_amount);		//stores the amount entered
		
             if (withdrawal_amount <=current_balance) {
                   // allows withdrwals when the balnce is greater than the amount to be withdrawn
               current_balance = current_balance - withdrawal_amount;
               printf("Amount withdrawn: %d\n", withdrawal_amount);
               printf("New balance: %d\n", current_balance);
             }else{
        	       // prints an error when the withdrawal amount exceeds the balance
               printf("Insufficient funds!");      
           }		
 }
         //outputs the final message to show the depletion of funds in the account
     printf("\nYour account is out of Funds.\n");
return 0;
}

