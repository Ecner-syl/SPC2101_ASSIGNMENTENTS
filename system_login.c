/*
NAME:DENNIS KARIUKI NGANGA
REG NO: CT101/G/26473/25
DESCRIPTION :A C program that checks the correct password input for a successful system login
*/
#include<stdio.h>
int main(){//main function
 int password;//variable declaration	
   do { //loops at least once
	     printf("Enter Your Password To Login\n");//asks the user for password	
   	     scanf("%d",&password);//reads the user input
           if (password !=1234){//checks the validity of the password
	         printf("\n Incorrect Password.Try Again\n");//showsa error message if incorrect 
	    }
			
    }while(password!=1234);//loops until the password is correct
  printf("Access Granted\n");//displays success message when the passwords allign
return 0;//the program ends successfully
}
