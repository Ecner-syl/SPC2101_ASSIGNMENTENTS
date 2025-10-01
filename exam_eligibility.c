/*A program to check a students eligibility for the final exam
NAME:DENNIS KARIUKI NGANGA
REG NO:XCT101/G/26473/25
DATE:30TH SEPTEMBER 2025
DESCRIPTION:A PROGRAM TO CHECK THE ELIGIBILITY OF A STUDENT TO SIT FOR FINAL EXAMS
*/
#include <stdio.h>
// main functin
int main(){
  	//variable declaration
  	int marks,attendance,attendancepercentage;
  

   	    //user input
         printf("Enter the number of sessions attended(out of 14):\n");
         scanf("%d",&attendance);
             // validates the attendance
             if (attendance > 14 || attendance < 0) {
             printf(" Invalid input!! Sessions attended must be between 0 and 14.\n");
             return 1;// stops the program early if the attendance is not within the range
             }
    	      
  	          printf("Enter the average marks scored\n");
  	          scanf("%d",&marks);
  	        
    	       // converts the number of sessions into %
               attendancepercentage = (attendance * 100) / 14;
              
			  // outputs the user inputs   
  		      printf("Attendance percentage is %d%%\n", attendancepercentage);   
  	          printf("Average marks scored is %d\n",marks);
  	        
          // checks the  eligibility of the student
          if (attendancepercentage >= 75 && marks >= 40) {
          printf(" You Are Eligible for exams\n");
          } else{
         printf(" You Are Not eligible for exams\n");
		 }
return 0;
}
	 


	 


