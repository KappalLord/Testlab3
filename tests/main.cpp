#include <gtest/gtest.h>
#include "test.h"
#include "test_cp.h"
#include "test_cd.h"
#include "test_cfb.h"
#include "test_ob.h"
#include "test_cm.h"
#include "test_m.h"

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
