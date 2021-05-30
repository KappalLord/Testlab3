#include <math.h>
#include <stdlib.h>
void move(int oldX,int oldY,int newX,int  newY, int board[8][8]);
int checkOnDestroy(int  x, int  y, int board[8][8]);
int checkPlace(int  x,int  y, int board[8][8]);
int createDamka(int  x, int  y, int board[8][8]);
int checkForBoard(int  x, int  y);
int outBoard(int  x, int  y);
int checkMove(int  oldX, int  oldY, int  newX, int  newY, int board[8][8]);
