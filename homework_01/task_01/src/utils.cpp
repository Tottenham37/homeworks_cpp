#include "utils.hpp"

#include <iostream>
#include <stack>
#include <string>
#include <vector>

std::vector<std::string> SplitString(const std::string& data) {
  std::vector<std::string> words;
  std::string word;
  bool flag;
  for (int i = 0; i <= data.length(); i++) {
    if (i != data.length() - 1) {
      if (data[i] == '(') {
        flag = true;
      }
      if (data[i] == ')') {
        flag = false;
      }
      if ((data[i] == ' ' || data[i] == '\t') && (flag == false)) {
        words.push_back(word);
        word.clear();
      }
      if (data[i] == ' ' && flag == true) {
        word = word + data[i];
      }
      if ((data[i] != ' ') and (data[i] != '\t')) {
        word = word + data[i];
      }
    } else if (i == data.length() - 1) {
      if (data[i] == ' ') {
        if (word.length() >= 1) {
          words.push_back(word);
        } else {
        }
      } else if (data[i] != ' ') {
        word = word + data[i];
        words.push_back(word);
      }
    }
  }
  return words;
}
