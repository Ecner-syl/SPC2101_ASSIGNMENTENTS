/*
NAME: NGANGA DENNIS KARIUKI
REG NO: CT101/G/26473/25
DESCRIPTION:
Program that simulates room occupancy for a hotel chain with 3 branches
 (5 floors, 10 rooms each), assigning random room status 
 and displaying occupied and vacant counts per floor, branch,
  and overall total.
*/

#include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()

int main() {
    int chain[3][5][10];     // 3 branches × 5 floors × 10 rooms
    int branch, floor, room;
    int totalOccupied = 0;   // across all branches
    int totalVacant = 0;     // across all branches

    srand(time(0)); // seed random number generator
     printf("\n");
    printf(" RENCE HOTEL BRANCH ROOM OCCUPANCY MANAGEMENT SYSTEM \n\n");


    // --- PROCESSING & OUTPUT ---
    for (branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;  // occupied count for this branch
        int branchVacant = 0;    // vacant count for this branch

        printf("...............................\n ");
        printf("BRANCH %d\n", branch + 1);
      

        for (floor = 0; floor < 5; floor++) {
            int occupied = 0; // occupied rooms for this floor

            // Loop through each room and assign occupancy
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room] == 1)
                    occupied++;
            }

            int vacant = 10 - occupied; // vacant rooms per floor

            // Add to branch totals
            branchOccupied += occupied;
            branchVacant += vacant;

            // Display per-floor summary
            printf("  Floor %d -> Occupied: %d | Vacant: %d\n",
                   floor + 1, occupied, vacant);
        }

        // Branch summary
        printf("----------------------------------\n");
        printf("  Branch %d Total -> Occupied: %d | Vacant: %d\n",
               branch + 1, branchOccupied, branchVacant);

        // Add to overall totals
        totalOccupied += branchOccupied;
        totalVacant += branchVacant;
    }

    //OVERALL SUMMARY
    printf("\n=====================================\n");
    printf(" TOTAL ACROSS ALL BRANCHES\n");
    printf("Occupied: %d | Vacant: %d | Total Rooms: %d\n",
           totalOccupied, totalVacant, totalOccupied + totalVacant);
    printf("=====================================\n");

    return 0;
}

