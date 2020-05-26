#include <iostream>
#include <vector>
#include <vector>

bool compare(std::vector<int> keys,  std::vector<int> inputs) {
  return keys == inputs;
}

bool compare(std::string keys,  std::string inputs) {
  return keys == inputs;
}

void showAllElements(std::vector<int> array) {
  for (auto element : array) { std::cout << element << std::endl; }
}

int main() {
  std::string hoge = "hoge";
  std::string fuga = "Hoge";
  std::vector<int> keys = {1, 2, 1, 2, 1};
  std::vector<int> wrong = {1, 1, 1, 1, 1};
  std::vector<int> correct = {1, 2, 1, 2, 1};

  std::cout << std::string("first element: ") << keys[0] << std::endl;

  showAllElements(keys);

  std::cout << std::string("size: ") << keys.size() << std::endl;
  std::cout << std::string("wrong: ") << std::boolalpha << compare(keys, wrong) << std::endl;
  std::cout << std::string("correct: ") << std::boolalpha << compare(keys, correct) << std::endl;

  keys.push_back(3);
  std::cout << std::string("size: ") << keys.size() << std::endl;
  showAllElements(keys);

  std::cout << std::string("string: ") << std::boolalpha << compare(hoge, fuga) << std::endl;

  return 0;
}
