#ifndef TEST_CM_H
#define TEST_CM_H
extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>

TEST(CM,pozitive){
    int gBoard[8][8] = {
                       {-1, 0, 2, 0, 0, 0, 0, 0},
                       { 0, 0, 0, 0,-1, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 0, 1, 0},
                       { 0, 0,-1, 0, 0, 1, 0, 0},
                       { 0, 0, 0, 1, 0, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 0, 0,-2},
                       { 0, 0, 0,-1, 0, 0, 0, 0},
                       {-2, 0, 1, 0, 0, 0, 0, 0}
                       };
    ASSERT_EQ(checkMove(2,3,3,4,gBoard),0);
    ASSERT_EQ(checkMove(0,7,7,0,gBoard),1);
    ASSERT_EQ(checkMove(2,3,3,4,gBoard),1);
    ASSERT_EQ(checkMove(0,0,1,1,gBoard),1);
    ASSERT_EQ(checkMove(7,5,4,2,gBoard),1);
}
TEST(CM,negative){
    int gBoard[8][8] = {
                       {-1, 0, 2, 0, 0, 0, 0, 0},
                       { 0, 0, 0, 0,-1, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 0, 1, 0},
                       { 0, 0,-1, 0, 0, 1, 0, 0},
                       { 0, 0, 0, 1, 0, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 0, 0,-2},
                       { 0, 0, 0,-1, 0, 0, 0, 0},
                       {-2, 0, 1, 0, 0, 0, 0, 0}
                       };
    ASSERT_EQ(checkMove(2,3,3,4,gBoard),0);
    ASSERT_EQ(checkMove(0,7,5,0,gBoard),0);
    ASSERT_EQ(checkMove(2,3,3,6,gBoard),0);
    ASSERT_EQ(checkMove(0,2,1,2,gBoard),0);
    ASSERT_EQ(checkMove(1,7,7,2,gBoard),0);
}



TEST(CM,test3){

    int gBoard[8][8] = {
                       {-1, 0, 2, 0, 0, 0, 0, 0},
                       { 0, 0, 0, 0,-1, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 0, 1, 0},
                       { 0, 0,-1, 0, 0, 1, 0, 0},
                       { 0, 0, 0, 1, 0, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 0, 0,-2},
                       { 0,-1, 0,-1, 0, 0, 0, 0},
                       {-2, 0, 1, 0, 0, 0, 0, 0}
                       };

    ASSERT_EQ(checkMove(0,7,2,5,gBoard),1);
    ASSERT_EQ(gBoard[6][1],0);

}
TEST(CM,test4){

    int gBoard[8][8] = {
                       {-1, 0, 2, 0, 0, 0, 0, 0},
                       { 0, 0, 0, 0,-1, 0, 0, 0},
                       { 0,-1, 0, 0, 0, 1, 1, 0},
                       { 0, 0,-1, 0, 1, 1, 0, 0},
                       { 0, 0, 0, 2, 0, 0, 0, 0},
                       { 0, 0, 0, 0,-1, 0, 0,-2},
                       { 0,-1, 0,-1, 0,-1, 0, 0},
                       { 0, 0, 1, 0, 0, 0, 0, 0}
                       };

    ASSERT_EQ(checkMove(3,4,0,1,gBoard),0);
    ASSERT_EQ(checkMove(3,4,5,2,gBoard),0);
    ASSERT_EQ(checkMove(3,4,6,7,gBoard),0);
    ASSERT_EQ(checkMove(3,4,0,7,gBoard),1);
    ASSERT_EQ(gBoard[6][1],0);


}

TEST(CM,test5){

    int gBoard[8][8] = {
                       {-1, 0, 2, 0, 0, 0, 0, 0},
                       { 0, 0, 0, 0,-1, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 0, 1, 0},
                       { 0, 0, 0, 0, 0, 1, 0, 0},
                       { 0, 0, 0,-2, 0, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 0, 0,-2},
                       { 0,-1, 0,-1, 0, 0, 0, 0},
                       {-2, 0, 1, 0, 0, 0, 0, 0}
                       };

    ASSERT_EQ(checkMove(3,4,1,2,gBoard),1);
    ASSERT_EQ(checkMove(3,4,5,2,gBoard),1);
    ASSERT_EQ(checkMove(3,4,5,6,gBoard),1);
    ASSERT_EQ(checkMove(3,4,1,6,gBoard),1);

}


#endif // TEST_CM_H
