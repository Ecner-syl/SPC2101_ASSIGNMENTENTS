/*
NAME:DENNIS KARIUKI NGANGA
REG NO:CT101/G/26473/25
DESCRIPTION:a program that converts temperature from fahreheit to celcius
*/
#include <stdio.h>

// function declaration
 float convertToCelsius(float fahrenheit) {
   float celsius;
   celsius = (fahrenheit-32)*5/9;//converts fahrenheit to celcius
return celsius;
}

void  main()
{
 float result, F;
  printf("Enter temperature in Fahrenheit:\n "); //prompts the user input
    scanf("%f", &F);
    result = convertToCelsius(F);  //call the function
 printf("Temp in Fahrenheit=%.0fF\n",F); //prints the user inut
 printf("Temperature = %.2f C\n", result); //prints the results
return 0;
}

