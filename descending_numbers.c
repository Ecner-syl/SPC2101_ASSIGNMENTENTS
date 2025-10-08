/*
NAME:DENNIS KARIUKI NGANGA
REG NO: CT101/G/26473/25
DESCRIPTION :A C program to count numbers from 100 to 5o in a descending order
*/

#include <stdio.h>     
#include <unistd.h>  // for sleep to add a delay in between printing

int main() {
  int i;//variable declaration
     for (i = 100; i >= 50; i--) //initializes i as 100 and decreases i by 1 until i=50 then stops
	  {
	  printf("%d\n", i);         // print the number on a new line
      usleep(30000);   // delay 30,000 microseconds = 0.03 seconds
      }
 return 0;
}

