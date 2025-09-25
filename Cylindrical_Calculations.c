//Description: Program to compute volume and surface area of a cylinder 
/*
Name: DENNIS KARIUKI NGANGA. 
Registration no: CT101/G/26473/25
*/
#include<stdio.h>
//main function 
int main(){
    //variable declaration 
    float radius, height, volume, area;
    const double PI=3.142;
    
    //prompt the user to enter amount 
    printf("Enter radius in cm: ");
    scanf("%f", &radius);
    
    printf("Enter height in cm: ");
    scanf("%f", &height);
    
    //compute volume and surface area 
    volume = PI*radius*radius*height;
    area = 2*PI*radius*radius+2*pi*radius*height;
    
    //display volume and surface area 
    printf("\nVolume is %fcm³", volume);
    printf("\nSurface area is %fcm²", area);
    
    return 0;
    }
