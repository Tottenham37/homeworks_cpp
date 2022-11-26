#include <iostream>
#include <string>
#include <utils.hpp>
#include <vector>

int main() {
  auto result = SplitString("aaa aaa ");
  for (std::string word : result) {
    std::cout << word << '\n';
  }
  return 0;
}