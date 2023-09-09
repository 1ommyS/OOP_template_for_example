#include <iostream>
#include <string>

#include "convertDateTo24HrFormat.h"

std::string convertDateTo24HrFormat(int hours, int minutes,
                                    const std::string &period) {
  std::string result;
  if (period == "am") {
    if (hours < 10) {
      result += "0";
    }
    result += std::to_string(hours);
  } else if (period == "pm") {
    result += std::to_string(hours + 12);
  } else {
    return "Ошибка ввода! Введите am или pm";
  }
  result += std::to_string(minutes);
  return result;
}

int main() {
    int hours, minutes;
    std::cout << "Введите через пробел часы (от 1 до 12) и минуты (от 0 до 59):" << std::endl;
    std::cin >> hours >> minutes;
    std::cout << "Введите период (am или pm): " << std::endl;

    std::string period;

    std::cin.ignore();
    std::getline(std::cin, period);

    std::string result = convertDateTo24HrFormat(hours, minutes, period);
    std::cout << "Результат работы функции: " << result << std::endl;
}