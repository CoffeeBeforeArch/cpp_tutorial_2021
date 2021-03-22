// Tutorial example 5
// Basic while loops

#include <iostream>

int main() {
  // Count down from 10->0
  int i = 10;
  while (i != 0) {
    std::cout << i << ' ';
    i--;
  }
  std::cout << '\n';

  return 0;
}
