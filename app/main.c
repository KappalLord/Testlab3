#include "function.h"
int main()
{
    int gameBoard[8][8] = {{-1, 0,-1, 0,-1, 0,-1, 0},
                           { 0,-1, 0,-1, 0,-1, 0,-1},
                           {-2, 0,-1, 0,-1, 0,-1, 0},
                           { 0, 0, 0, 0, 0, 0, 0, 0},
                           { 0, 0, 0, 0, 0, 0, 0, 0},
                           { 0, 1, 0, 1, 0, 1, 0, 1},
                           { 1, 0, 1, 0, 1, 0, 1, 0},
                           { 0, 1, 0, 1, 0, 1, 0, 1}
                          };
    int  oldX=0;
    int  oldY=0;
    int  newX=3;
    int  newY=3;

    move(oldX, oldY, newX, newY, gameBoard);
    checkOnDestroy(oldX, oldY, gameBoard);
    checkPlace(0, 0, gameBoard);
    createDamka(oldX, oldY, gameBoard);
    outBoard(0,1);
    checkForBoard(2,5);
    checkMove(0,2,3,5,gameBoard);
    return 0;
}
