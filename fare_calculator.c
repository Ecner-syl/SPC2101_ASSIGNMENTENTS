/*
NAME:DENNIS KARIUKI NGANGA
REG NO:CT101/G/26473/25
DESCRIPTION:
*/
// function definition 
float total_fare(float distance)
{
	float total_fare ;//variable declaration
	total_fare= distance*50 ;
return total_fare ;
}
#include <stdio.h>

void main()
{
 float d,fare;
 printf("Enter distance covered in Km \n"); //propmts user input
 scanf("%f",&d );	
 fare = total_fare(d);//call funtion
  printf("Total fare = Ksh %.2f\n",fare); //prints the results
return 0;
}


