#include "BattleshipMain.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 10
#define NUM_SHIPS 5
#define NUM_BIGSHIPS 1
#define NUM_MEDSHIPS 2
#define NUM_SMALLSHIPS 2

// Function prototypes
void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]);
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]);
void placeShips(char board[BOARD_SIZE][BOARD_SIZE]);
int isValidPlacement(char board[BOARD_SIZE][BOARD_SIZE], int shipSize, int row, int col, char direction);
int takeTurn(char board[BOARD_SIZE][BOARD_SIZE], int* shipsRemaining);
int isGameOver(int shipsRemaining);

int main(){
    //load board
    char playerboard[BOARD_SIZE][BOARD_SIZE];
    char computerboard[BOARD_SIZE][BOARD_SIZE];

    int playershipsremaining = NUM_SHIPS;
    int computershipsremaining = NUM_SHIPS;

    srand(time(NULL));

    initializeBoard(playerboard);
    initializeBoard(computerboard);

    //print board
    printBoard(playerboard);

    printf("KJELLUS BATTLESHIP or something? \n\n now place ships");
    //place ships

    //can ship be placed?

    //game start
    //win or lose


    return 0;
}

void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]){
    for (int i=0; i< BOARD_SIZE; i++){
        for (int j = 0; j< BOARD_SIZE; j++){
            board[i][j] = ' '; /* det her gør at alle celler i arayet er tomme og ikke viser noget synligt*/
        }
    }
}

void printBoard(char board[BOARD_SIZE][BOARD_SIZE]){

    /*numbers horisontal*/
    printf("  ");
    for (int i = 0; i< BOARD_SIZE; i++){
        printf("%d ", i);
    }
    printf("\n");

    /*numbers vertical*/
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%d ", i);
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void placeShips(char [BOARD_SIZE][BOARD_SIZE]){
    int shipSizes[NUM_SHIPS] = {5,4,3,3,2};

    for (int i = 0; i < NUM_SHIPS; i++){
        int shipSize = shipSizes[i]; //Load size of the ship in array


        int isHorizontal = rand() % 2; //place randomly ship in position; 0 for vertical, 1 for horizontal

        int row, col; //integers for both row and columns

        if (isHorizontal){

        }

    }
}/*
 * if (isValidPlacement(board, shipSize, row, col, (isHorizontal ? 'H' : 'V'))) {
 *If isHorizontal is true, it evaluates to 'H'; otherwise, it evaluates to 'V'. So, this part is determining whether the ship should be placed horizontally or vertically based on the value of isHorizontal.
 * */
