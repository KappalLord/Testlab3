#ifndef TEST_H
#define TEST_H
extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>

TEST(COD,pozitive){

    int gBoard[8][8] = { {-1, 0,-1, 0,-1, 0,-1, 0},
                         { 0,-1, 0,-1, 0,-1, 0,-1},
                         {-2, 0,-1, 0,-1, 0,-1, 0},
                         { 0, 0, 0, 0, 0, 0, 0, 0},
                         { 0, 0, 0, 0, 0, 0, 0, 0},
                         { 0, 1, 0, 1, 0, 1, 0, 1},
                         { 1, 0, 1, 0, 1, 0, 1, 0},
                         { 0, 1, 0, 1, 0, 1, 0, 1} };
    ASSERT_EQ(checkOnDestroy(7,7,gBoard),0);
    ASSERT_EQ(checkOnDestroy(0,0,gBoard),0);
    ASSERT_EQ(checkOnDestroy(2,6,gBoard),0);
    ASSERT_EQ(checkOnDestroy(6,2,gBoard),0);
    ASSERT_EQ(checkOnDestroy(4,0,gBoard),0);
}

TEST(COD,negative){
    int gBoard[8][8] = { {-1, 0,-1, 0,-1, 0,-1, 0},
                         { 0,-1, 0,-1, 0,-1, 0,-1},
                         {-2, 0,-1, 0,-1, 0,-1, 0},
                         { 0, 0, 0, 0, 0, 0, 0, 0},
                         { 0, 0, 0, 0, 0, 0, 0, 0},
                         { 0, 1, 0, 1, 0, 1, 0, 1},
                         { 1, 0, 1, 0, 1, 0, 1, 0},
                         { 0, 1, 0, 1, 0, 1, 0, 1} };
    ASSERT_EQ(checkOnDestroy(7,6,gBoard),1);
    ASSERT_EQ(checkOnDestroy(0,7,gBoard),1);
    ASSERT_EQ(checkOnDestroy(2,4,gBoard),1);
    ASSERT_EQ(checkOnDestroy(5,0,gBoard),1);
    ASSERT_EQ(checkOnDestroy(3,2,gBoard),1);
}



#endif
