#include "../include/sum.h"
#include <gtest/gtest.h>
#include <iostream>
// Test case kiểm tra hàm Sum
TEST(SumTest, PositiveNumbers) {
    EXPECT_EQ(Sum(2, 3), 5);
}

TEST(SumTest, NegativeNumbers) {
    EXPECT_EQ(Sum(-2, -3), -5);
}

int main(int argc, char **argv) {
    int a = 3;
    int b = 1;
    int sum = Sum(a,b);
    std::cout<< sum;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    
}