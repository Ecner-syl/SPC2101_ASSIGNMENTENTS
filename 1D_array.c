/*
NAME:NGANGA DENNIS KARIUKI
REG NO:CT101/G/26473/25
DESCRIPTION:a 1D Array program which takes daily revenue as input,
           calculates total and average 
		   and displays the output to the screen.
*/
#include <stdio.h>
 
int main() {
    float revenue[7],total,average;//variable declaration
	int i;//loop counter
	 for (i=0;i<7; i++){//loop initialisation to take input for each day
	 	printf("Enter revenue for day %d:",i+1);//propmts the user to enter daily revenue
	 	scanf("%f",&revenue[i]);//stores each day'suser iput
	 }
       total = 0;//initialise total as zero
    for(i = 0; i < 7; i++) {
    total += revenue[i];//adds daily revenue to the total
    average = total / 7;//computes the average for the 7 days
  }
  
   printf("\nTotal weekly revenue = %.2f", total);//displays the total revenue
   printf("\nAverage daily revenue = %.2f\n", average);//displays the average 


    return 0;
}

