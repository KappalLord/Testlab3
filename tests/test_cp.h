#ifndef TEST_CP_H
#define TEST_CP_H

extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>

TEST(CP,pozitive){
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

    ASSERT_EQ(checkPlace(1, 0, gBoard), 1);
    ASSERT_EQ(checkPlace(7, 2, gBoard), 1);
    ASSERT_EQ(checkPlace(3, 3, gBoard), 1);
    ASSERT_EQ(checkPlace(7, 3, gBoard), 1);
    ASSERT_EQ(checkPlace(6, 4, gBoard), 1);
}

TEST(CP,negative){
    int gBoard[8][8] = { {-1, 0,-1, 0,-1, 0,-1, 0},
                       { 0,-1, 0,-1, 0,-1, 0,-1},
                       {-2, 0,-1, 0,-1, 0,-1, 0},
                       { 0, 0, 0, 0, 0, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 0, 0, 0},
                       { 0, 1, 0, 1, 0, 1, 0, 1},
                       { 1, 0, 1, 0, 1, 0, 1, 0},
                       { 0, 1, 0, 1, 0, 1, 0, 1} };

    ASSERT_EQ(checkPlace(5, 5, gBoard), 0);
    ASSERT_EQ(checkPlace(7, 7, gBoard), 0);
    ASSERT_EQ(checkPlace(3, 5, gBoard), 0);
    ASSERT_EQ(checkPlace(7, 1, gBoard), 0);
    ASSERT_EQ(checkPlace(6, 2, gBoard), 0);
}
#endif // TEST_CP_H
