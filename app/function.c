#include "function.h"

void move(int  oldX,int  oldY,int  newX,int  newY, int board[8][8]){
    int kek = board[oldY][oldX];
    board[oldY][oldX] = 0;
    board[newY][newX] = kek;
}

int checkOnDestroy(int  x, int  y, int board[8][8]){
    if(board[y][x] == 0)
        return 1;
    else
        return 0;

}

int checkPlace(int  x, int  y, int board[8][8]){
    if(board[y][x] == 0)
        return 1;
    else
        return 0;
}

int createDamka(int  x, int  y, int board[8][8]){
    if(board[y][x] > 0 && y == 0)
        board[y][x] = 2;
    else if (board[y][x] < 0 && y == 7) {
        board[y][x] = -2;
    }
    return abs(board[y][x]);
}

int checkForBoard(int  x, int  y){
    if((x + y) % 2 == 0)
        return 1;
    else return 0;
}

int outBoard(int  x, int  y){
    if (x <= 7 && y  <= 7 && x >= 0 && y >= 0)
        return 1;
    else return 0;
}
