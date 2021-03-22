// Tutorial example 2
// Basic variable usage

#include <iostream>

int main() {
  // Declare 3 integers
  int a;
  int b;
  int c;

  // Initialize our three integers
  a = 5;
  b = 10;
  c = a + b;

  // Print out the result
  std::cout << a << " + " << b << " = " << c << '\n';

  // Declare and initialize 3 floating point numbers
  float d = 5.5f;
  float e = 10.3f;
  float f = d + e;

  // Print out the result
  std::cout << d << " + " << e << " = " << f << '\n';

  return 0;
}
