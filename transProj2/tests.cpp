#include "gtest/gtest.h"
#include "Functions.h"

TEST(TranslateFunc, test1)
{

const char* expected = TranslateFunc("asbfjnzxcnjqsanfj njasnfjzxcmkasjfnjsfn 123124125");
const char* actual = "asbfjnzxcnjqsanfj njasnfjzxcmkasjfnjsfn 123124125";
EXPECT_STREQ(actual, expected);
delete[] expected;
}
TEST(TranslateFunc, test2)
{

    const char* expected = TranslateFunc("Скоро новый год. Поздравляю всех с наступающим!");
    const char* actual = "Skoro novyiy god. Pozdravlyayu vseh s nastupayuschim!";
    EXPECT_STREQ(actual, expected);
    delete[] expected;
}
TEST(TranslateFunc, test3)
{

    const char* expected = TranslateFunc("");
    const char* actual = "";
    EXPECT_STREQ(actual, expected);
    delete[] expected;
}
TEST(TranslateFunc, test4)
{

    const char* expected = TranslateFunc("ъюь");
    const char* actual = "\"yu\'";
    EXPECT_STREQ(actual, expected);
    delete[] expected;
}
TEST(TranslateFunc, test5)
{

    const char* expected = TranslateFunc("ёЁёЁЁ");
    const char* actual = "yoYOyoYOYO";
    EXPECT_STREQ(actual, expected);
    delete[] expected;
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

