#ifndef TOWEROFHANOI_LIB_H
#define TOWEROFHANOI_LIB_H

// header files
#include <stdio.h>
#include <math.h>

// global constants
#define EMPTY_VALUE 0 // Empty value
#define TOTAL_DISKS 3 // Total disks
#define TOWER_SIZE 3 // Max tower size

/**
 * Name: initializeTower
 * Process: initialize the source tower with disks in ascending order
 * Function input/parameters: 
            tower - an array representing the disks in tower
            size - pointer to the length of the array  
 * Function output/parameters: none
 * Function output/returned: none
 * Dependencies: none
 **/
void initializeTower(int*tower, int*size);

/**
 * Name: addDisk
 * Process: add a given disk to the tower and update the size of tower
 * Function input/parameters: 
            tower - an array representing the disks in tower
            size - pointer to the size of the array
            disk - disk to be added to be tower  
 * Function output/parameters: none
 * Function output/returned: none
 * Dependencies: none
 **/
void addDisk(int*tower, int*size, int disk);

/**
 * Name: getDisk
 * Process: remove the top disk of the tower and update size
 * Function input/parameters: 
            tower - an array representing the disks in tower
            size - pointer to the size of the array  
 * Function output/parameters: none
 * Function output/returned: top disk of the tower
 * Dependencies: none
 **/
int getDisk(int*tower, int*size);

/**
 * Name: moveDisk
 * Process: moves a disk from the source tower to the target tower
 * Function input/parameters: 
            sourceTower - an array representing the disks in source tower
            sourceSize - pointer to the length of source tower  
 * Function output/parameters: 
            destinationTower - an array representing the disks in
                               destination tower
            destinationSize - pointer to the length of destination tower
 * Function output/returned: none
 * Dependencies: getDisk(), addDisk()
 **/
void moveDisk(int*sourceTower, int*destinationTower,
              int*sourceSize, int*destSize);

/**
 * Name: towerOfHanoi
 * Process: Implement the towerofHanoi puzzle
 * Function input/parameters:
            sourceTower - an array representing the disks in source tower
            sourceSize - pointer to the length of source tower
            auxTower - an array representing the disks in auxiliary tower
            auxSize - pointer to the length of auxiliary tower
 * Function output/parameters:
            destinationTower - an array representing the disks in 
                               destination tower
            destinationSize - pointer to the length of
                               destination tower
 * Function output/returned: none
 * Dependencies: initializeTower(), printTower(), moveDisk()
 **/
void towerOfHanoi(int*sourceTower, int*auxTower, int*destinationTower,
                    int*sourceSize,int*auxSize,int*destinationSize);


/**
 * Name: printTower
 * Process: Print the current status of all towers
 * Function input/parameters:
            sourceTower - an array representing the disks in source tower
            sourceSize - current size of source tower
            auxTower - an array representing the disks in auxiliary tower
            auxSize - current size of source tower
            destinationTower - an array representing the disks in 
                               destination tower
            destinationSize - current size of destination tower            
 * Function output/parameters: none
 * Function output/returned: none
 * Dependencies: none
 **/
void printTower(int*sourcetower, int*auxTower, int*destinationTower,
                    int sourceSize, int auxSize, int destinationSize);

#endif