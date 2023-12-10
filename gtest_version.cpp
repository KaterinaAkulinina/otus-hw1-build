
#include "lib.h"
#include <gtest/gtest.h>

using namespace std;

TEST(TestGroupName, Subtest_1) {
  ASSERT_TRUE(version() > 0);
}


int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
