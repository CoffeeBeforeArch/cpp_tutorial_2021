// Tutorial example 7
// Basic function templates

#include <iostream>

// Template our square function on the type "T"
// Will generate a function for each type "T" we use
template <typename T>
T square(T val) {
  return val * val;
}

int main() {
  // Square an integer and print it
  int result = square<int>(5);
  std::cout << "5^2 = " << result << '\n';

  // Square a floating point number and print it
  float result2 = square<float>(5.5f);
  std::cout << "5.5^2 = " << result2 << '\n';

  return 0;
}
