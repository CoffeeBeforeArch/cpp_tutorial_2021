// Tutorial example 6
// Basic functions

#include <iostream>

// A function that takes an integer and returns an integer
int square(int val) {
  // Square the value then return it
  return val * val;
}

int main() {
  // Call our function and return the result into our variable
  int result = square(5);
  
  // Print the result
  std::cout << "5^2 = " << result << '\n';

  return 0;
}
