#include <gtest/gtest.h>
#include "convertDateTo24HrFormat.h"

TEST(convertDateTo24HrFormat_AM_Period_Correct_Answer, BasicAssertions) {
    // arrange
    int hours = 11;
    int minutes = 10;
    std::string period = "am";
    // act
    std::string result = convertDateTo24HrFormat(hours, minutes, period);
    // assert
    ASSERT_EQ(result, "1110");
}
TEST(convertDateTo24HrFormat_PM_Period_Correct_Answer, BasicAssertions) {
    // arrange
    int hours = 7;
    int minutes = 57;
    std::string period = "pm";
    // act
    std::string result = convertDateTo24HrFormat(hours, minutes, period);
    // assert
    ASSERT_EQ(result, "1957");
}
TEST(convertDateTo24HrFormat_INCorrect_Answer, BasicAssertions) {
    // arrange
    int hours = 11;
    int minutes = 10;
    std::string period = "em";
    // act
    std::string result = convertDateTo24HrFormat(hours, minutes, period);
    // assert
    ASSERT_EQ(result, "Ошибка ввода! Введите am или pm");
}