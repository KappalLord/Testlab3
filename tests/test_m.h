#ifndef TEST_M_H
#define TEST_M_H

extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>

TEST(M1,test1){
    int gBoard[8][8] = {
                       {-1, 0,-1, 0,-1, 0,-1, 0},
                       { 0,-1, 0,-1, 0,-1, 0,-1},
                       {-2, 0,-1, 0,-1, 0,-1, 0},
                       { 0, 0, 0, 0, 0, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 0, 0, 0},
                       { 0, 1, 0, 1, 0, 1, 0, 1},
                       { 1, 0, 1, 0, 1, 0, 1, 0},
                       { 0, 1, 0, 1, 0, 1, 0, 1}
                       };
    move(0,2,2,4,gBoard);
    move(7,5,6,4,gBoard);
    EXPECT_EQ(gBoard[2][0], 0);
    EXPECT_EQ(gBoard[4][2], -2);
    EXPECT_EQ(gBoard[5][7], 0);
    EXPECT_EQ(gBoard[4][6], 1);
}

TEST(M2,test1){
    int gBoard[8][8] = {
                       {-1, 0,-1, 0,-1, 0,-1, 0},
                       { 0,-1, 0,-1, 0,-1, 0,-1},
                       {-2, 0,-1, 0,-1, 0,-1, 0},
                       { 0, 0, 0, 0, 0, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 0, 0, 0},
                       { 0, 1, 0, 1, 0, 1, 0, 1},
                       { 1, 0, 1, 0, 1, 0, 1, 0},
                       { 0, 1, 0, 1, 0, 1, 0, 1}
                       };
    move(2,2,2,4,gBoard);
    move(7,7,5,4,gBoard);
    EXPECT_EQ(gBoard[2][2], 0);
    EXPECT_EQ(gBoard[4][2], -1);
    EXPECT_EQ(gBoard[7][7], 0);
    EXPECT_EQ(gBoard[4][5], 1);
}

TEST(M2,test2){
    int gBoard[8][8] = {
                       {-1, 0,-1, 0,-1, 0,-1, 0},
                       { 0,-1, 0,-1, 0,-1, 0,-1},
                       {-2, 0,-1, 0,-1, 0,-1, 0},
                       { 0, 0, 0, 0, 0, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 0, 0, 0},
                       { 0, 1, 0, 1, 0, 1, 0, 1},
                       { 1, 0, 1, 0, 1, 0, 1, 0},
                       { 0, 1, 0, 1, 0, 1, 0, 1}
                       };
    move(4,2,7,4,gBoard);
    move(7,5,5,6,gBoard);
    EXPECT_EQ(gBoard[2][4], 0);
    EXPECT_EQ(gBoard[4][7], -1);
    EXPECT_EQ(gBoard[5][7], 0);
    EXPECT_EQ(gBoard[6][5], 1);
}
#endif // TEST_M_H
