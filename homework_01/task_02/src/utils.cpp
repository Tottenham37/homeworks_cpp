#include "utils.hpp"

#include <iostream>
#include <stack>
#include <string>

int Calculate(const std::string& data) {
  std::string number_1;
  std::string number_2;
  std::string znak;
  int result;
  for (int i = 0; i <= data.length(); i++) {
    if (data[i] == '+') {
      znak = '+';
    } else if (data[i] == '-') {
      znak = '-';
    } else if (data[i] == '*') {
      znak = '*';
    } else if (data[i] == '/') {
      znak = '/';
    } else {
      if (znak.length() == 0) {
        number_1 = number_1 + data[i];
      } else {
        number_2 = number_2 + data[i];
      }
    }
    if (i == data.length() - 1) {
      if (znak == "+") {
        result = std::stoi(number_1) + std::stoi(number_2);
      } else if (znak == "-") {
        result = std::stoi(number_1) - std::stoi(number_2);
      } else if (znak == "*") {
        result = std::stoi(number_1) * std::stoi(number_2);
      } else if (znak == "/") {
        if (std::stoi(number_2) == 0) {
          std::string result_2;
          result_2 = "Error: Division by Zero";
          throw std::runtime_error(result_2);
        } else {
          result = std::stoi(number_1) / std::stoi(number_2);
        }
      }
    }
  }
  return result;
  return 0;
}
