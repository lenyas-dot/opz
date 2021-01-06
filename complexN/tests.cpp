#include "gtest/gtest.h"
#include "src/complex.h"

TEST(ComplexNumber, t1)
{
    ComplexNumber number1 = { 2, 5 };
    ComplexNumber number2 = { 4, 2 };
    ComplexNumber expected = number1 + number2;
    EXPECT_TRUE(expected.integer == 6);
    EXPECT_TRUE(expected.imaginary == 7);
}

TEST(ComplexNumber, t2)
{
    ComplexNumber number1 = {7.2, 4.1};
    ComplexNumber number2 = {6.0, 4};
    ComplexNumber expected = number1 - number2;
    EXPECT_DOUBLE_EQ(expected.integer, 1.2);
    EXPECT_DOUBLE_EQ(expected.imaginary, 0.1);

}
TEST(ComplexNumber, t3)
{
    ComplexNumber number1 = {5, 4};
    ComplexNumber number2 = {1, 0};
    ComplexNumber expected = number1*number2;
    EXPECT_TRUE(expected.integer == 5);
    EXPECT_TRUE(expected.imaginary == 4);
}

TEST(ComplexNumber, t4)
{
    ComplexNumber number1 = {75, -50};
    ComplexNumber number2 = {3, 4};
    ComplexNumber expected = number1/number2;
    EXPECT_DOUBLE_EQ(expected.integer, 1);
    EXPECT_DOUBLE_EQ(expected.imaginary, -18);
}

TEST(ComplexNumber, t5)
{
    ComplexNumber number1 = {5, 3};
    ComplexNumber number2 = {0, 0};
    EXPECT_THROW(number1/number2, std::logic_error);
}
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
