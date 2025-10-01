/*
*/
#include <stdio.h>
int main(){
	//variable declaration
	int choice;
	//displays the data bundles menu
	printf("Data Deals\n");
	printf("1. 100mb @ 50Ksh\n");
	printf("2. 500mb @ 200Ksh\n");
	printf("3. 1GB   @ 350Ksh\n");
	printf("4. 2GB   @ 600Ksh\n");
	
	printf("Enter Your Choice\n");
	scanf("%d",&choice);
	
	 switch (choice){
	 	case 1:
	 		printf(" You Selected 100mb @ 50Ksh ");
	 		break ;
	     case 2:
	 	    printf(" You Selected 500mb @ 200Ksh ");
          	break;
        case 3:
        	printf(" You Selected  1GB   @ 350Ksh ");
        	break;
        case 4:
        	printf(" You Selected 2GB   @ 600Ksh");
        	break;
        default:
            printf("!! Invalid Choice");
        }
return 0;

}
