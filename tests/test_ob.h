#ifndef TEST_OB_H
#define TEST_OB_H
extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>
TEST(OB,pozitive){
    ASSERT_EQ(outBoard(0,0),1);
    ASSERT_EQ(outBoard(1,1),1);
    ASSERT_EQ(outBoard(2,2),1);
    ASSERT_EQ(outBoard(7,7),1);
    ASSERT_EQ(outBoard(2,3),1);
    ASSERT_EQ(outBoard(6,7),1);
    ASSERT_EQ(outBoard(1,4),1);
    ASSERT_EQ(outBoard(5,4),1);
    ASSERT_EQ(outBoard(4,7),1);
}

TEST(OB,negative){
    ASSERT_EQ(outBoard(10,15),0);
    ASSERT_EQ(outBoard(2,55),0);
    ASSERT_EQ(outBoard(-100,-10),0);
    ASSERT_EQ(outBoard(17,16),0);
    ASSERT_EQ(outBoard(22,-1),0);
    ASSERT_EQ(outBoard(1,-5),0);
    ASSERT_EQ(outBoard(8,-1),0);
    ASSERT_EQ(outBoard(-10,-100),0);
    ASSERT_EQ(outBoard(2,-7),0);

}
#endif // TEST_OB_H
