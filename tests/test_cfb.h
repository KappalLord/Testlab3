#ifndef TEST_CFB_H
#define TEST_CFB_H
extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>

TEST(CFB,pozitive){
    ASSERT_EQ(checkForBoard(1,1),1);
    ASSERT_EQ(checkForBoard(2,4),1);
    ASSERT_EQ(checkForBoard(5,5),1);
    ASSERT_EQ(checkForBoard(6,6),1);
    ASSERT_EQ(checkForBoard(3,7),1);
    ASSERT_EQ(checkForBoard(0,0),1);
    ASSERT_EQ(checkForBoard(7,5),1);
}

TEST(CFB,negative){
    ASSERT_EQ(checkForBoard(3,0),0);
    ASSERT_EQ(checkForBoard(0,1),0);
    ASSERT_EQ(checkForBoard(4,5),0);
    ASSERT_EQ(checkForBoard(7,2),0);
    ASSERT_EQ(checkForBoard(3,6),0);
    ASSERT_EQ(checkForBoard(1,2),0);
    ASSERT_EQ(checkForBoard(3,4),0);
}
#endif // TEST_CFB_H
