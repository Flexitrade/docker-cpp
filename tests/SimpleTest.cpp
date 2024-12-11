#include <gtest/gtest.h>

TEST(SimpleTest, IsTrue) {
    const auto expected = true;
    ASSERT_EQ(expected, true);
}

TEST(SimpleTest, IsFalse) {
    const auto expected = false;
    ASSERT_EQ(expected, false);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}