#ifndef TEST_CD_H
#define TEST_CD_H
extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>
TEST(CD,created){
    int gBoard[8][8] = { { 1, 0,-1, 0, 2, 0, 1, 0},
                         { 0, 0, 0,-1, 0, 0, 0, 1},
                         { 1, 0, 0, 0, 0, 0, 1, 0},
                         { 0,-1, 0, 0, 0, 1, 0, 0},
                         { 0, 0, 0, 0, 0, 0, 0, 0},
                         { 0, 0, 0, 0, 0, 0, 0, 0},
                         {-2, 0, 0, 0, 0, 0,-1, 0},
                         { 0, 0, 0, 0, 0,-1, 0, -2} }; 
    ASSERT_EQ(createDamka(0,0,gBoard),2);
    ASSERT_EQ(createDamka(4,0,gBoard),2);
    ASSERT_EQ(createDamka(6,0,gBoard),2);
    ASSERT_EQ(createDamka(7,7,gBoard),2);
    ASSERT_EQ(createDamka(5,7,gBoard),2);
}
TEST(CD,nocreated){
    int gBoard[8][8] = { { 1, 0,-1, 0, 2, 0, 1, 0},
                         { 0, 0, 0,-1, 0, 0, 0, 1},
                         { 1, 0, 0, 0, 0, 0, 1, 0},
                         { 0,-1, 0, 0, 0, 1, 0, 0},
                         { 0, 0, 0, 0, 0, 0, 0, 0},
                         { 0, 0, 0, 0, 0, 0, 0, 0},
                         {-2, 0, 0, 0, 0, 0,-1, 0},
                         { 0, 0, 0, 0, 0,-1, 0, -2} };
    ASSERT_EQ(createDamka(2,0,gBoard),1);
    ASSERT_EQ(createDamka(3,1,gBoard),1);
    ASSERT_EQ(createDamka(1,3,gBoard),1);
    ASSERT_EQ(createDamka(0,6,gBoard),2);
    ASSERT_EQ(createDamka(6,6,gBoard),1);

}
TEST(CD,zero){
    int gBoard[8][8] = { { 1, 0,-1, 0, 2, 0, 1, 0},
                         { 0, 0, 0,-1, 0, 0, 0, 1},
                         { 1, 0, 0, 0, 0, 0, 1, 0},
                         { 0,-1, 0, 0, 0, 1, 0, 0},
                         { 0, 0, 0, 0, 0, 0, 0, 0},
                         { 0, 0, 0, 0, 0, 0, 0, 0},
                         {-2, 0, 0, 0, 0, 0,-1, 0},
                         { 0, 0, 0, 0, 0,-1, 0, -2} };
    ASSERT_EQ(createDamka(1,0,gBoard),0);
    ASSERT_EQ(createDamka(3,0,gBoard),0);
    ASSERT_EQ(createDamka(7,5,gBoard),0);
    ASSERT_EQ(createDamka(4,3,gBoard),0);
    ASSERT_EQ(createDamka(5,5,gBoard),0);


}
#endif // TEST_CD_H
