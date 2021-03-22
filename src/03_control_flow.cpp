// Tutorial example 3
// Basic control flow in C++

#include <iostream>

int main() {
  // Create a few integers
  int a = 5;
  int b = 10;

  // Compare the values
  if (a < b) {
    // Print this if the condition was true
    std::cout << "a < b!\n";
  } else if (a == b) {
    // Print this if the previous condition was false, but this condition was
    // true
    std::cout << "a == b!\n";
  } else {
    // Print this if both previous conditions were false
    std::cout << "a > b!\n";
  }

  return 0;
}
