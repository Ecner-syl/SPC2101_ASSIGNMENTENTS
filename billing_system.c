/*
NAME:DENNIS KARIUKI NGANGA
REG NO:CT101/G/26473/25
DATE:30TH SEPTEMBER,2025
DESCRIPTION:A program to calculate water bill based on units consumed
*/
#include<stdio.h>
int main(){
 //variable declaration 
  float total_water_bill;
  int  units;
    //prompts the user to enter the number of units consumed
    printf("Enter the number of units consumed\n");
    scanf("%d",& units);
      //determines the price depending on category
      //calculates the total bill depending on the category 
          if (units >=0 && units<=30) {
          total_water_bill=(units * 20);
          } else if (units >=31 && units<= 60) {
          total_water_bill=(units *25);
         } else {
          total_water_bill=(units*30);
         }
     //outputs the results to the user
    printf("Total units consumed is %d\n", units);
    printf("Total Water Bill : %.2f KSH",total_water_bill);
return 0;
} 


