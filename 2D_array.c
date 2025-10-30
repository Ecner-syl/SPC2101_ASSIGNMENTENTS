/*
NAME:NGANGA DENNIS KARIUKI
REG NO:CT101/G/26473/25
DESCRIPTION:a program that simulates room occupancy in a hotel with
            5 floors with each floor having 10 rooms and finally 
            calculating the total rooms accupied and not occupied.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room, occupied, vacant;
    int totalOccupied = 0, totalVacant = 0;

    srand(time(0)); // randomize occupancy
    printf("\n");
    printf(" RENCE HOTEL BRANCH ROOM OCCUPANCY SUMMARY \n\n");

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;

        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
            if (occupancy[floor][room] == 1)
                occupied++;
        }

        vacant = 10 - occupied;

        totalOccupied += occupied;
        totalVacant += vacant;

        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupied, vacant);
    }

    printf("\n-----------------------------------\n");
    printf("Total Occupied: %d  \n", totalOccupied);
    printf("Total Vacant: %d\n",totalVacant);
    printf("Total Rooms: %d\n", totalOccupied + totalVacant);

    return 0;
}


