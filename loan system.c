//A program to Calculate a Customer's Compound interest earned. 
/*
NAME:DENNIS KARIUKI NGANGA 
REG NO:CT101/G/26473/25
*/

//crucial for scanf and printf
#include <stdio.h>  
//enables mathematical expressions like pow
#include <math.h>
  int main()
{
     //Variable declaration
       double A,P,r,t,CI;
       int n;
     //User inputs
     
        printf("Enter The Principle Amount\n");
         scanf("  %lf",&P);
      
         printf("Enter Annual Interest \n");
          scanf("  %lf",&r);
       
         printf("Enter The Number Of Years\n");
          scanf("  %lf",&t);
       
         printf("Enter The Number Of CompoundingYears\n");
          scanf("  %d",&n);
       // User inputs validation 
            if (P>0&r>0&t>0&n>0){
           
         //compound interest 
             r = r / 100;   // convert percentage to decimal
            A = P * pow((1 + r/n), n * t);  
           CI = A - P;
       //Prints Results
          printf("  Amount Compounded %.2lf\n", P);
          printf("  Compound interest earned = %.2lf\n", CI);
          printf("  Total Amount =%.2lf\n",A);
          
         printf ("  Thank you for investing with us");
       //Prints Error message when the inputs don't match the specifications
            }else  {
      printf("Error Generated.  Please Check your inputs");
         }  
 return 0;
 }
