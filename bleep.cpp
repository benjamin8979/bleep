#include <iostream>
#include <string>
#include "functions.hpp"

int main() {

  std::string word = "broccoli";
  std::string text = "In the town of broccoli, all the citizens eat broccoli for breakfast, and sleep in beds of broccoli at night.\n";

  std::cout << bleep(word, text);
}