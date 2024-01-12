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
    placeShips(playerboard);
    //can ship be placed?

    //game start
    //win or lose


    return 0;
}

void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]){
    for (int i=0; i< BOARD_SIZE; i++){
        for (int j = 0; j< BOARD_SIZE; j++){
            board[i][j] = ' ';
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