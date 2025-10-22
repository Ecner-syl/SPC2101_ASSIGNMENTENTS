/*
NAME:DENNIS KARIUKI NGANGA
REG NO:CT101/G/26473/25
DESCRIPTION:A program to calculate electricity bill
*/
#include <stdio.h>

// Function definition
float calculateElectricityBill(float units) {
 float bill;
  if (units<=100)  //determines the category of billing based on the numbern of units
  {bill=units*10; }
  else if (units<=200)
  {bill=(100*10)+(units-100)*15; }
  else
  {bill=(100*10)+(100*15)+(units-200)*20;}
return bill;
}
//main function
int main(){
	float units,total_bill;
	
	printf("Enter the number of Units Consumed\n");//propmts user input
	scanf("%f",&units);
	
	total_bill=calculateElectricityBill(units);//call funtion
	printf("Total Bill =Ksh.%.2f\n",total_bill);
return 0;
}
