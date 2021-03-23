// Tutorial example 8
// A simple example of vectors vectors

#include <iostream>
#include <vector>

int main() {
  // Create a vector of integers
  std::vector<int> v;

  // Fill it with some values
  for (int i = 0; i < 10; i++) {
    // Adds the value of "i" to the vector
    // The vector will grow if necessary
    v.push_back(i);
  }

  // We can use range-based for loops with our STL containers
  for (int i : v) {
    std::cout << i << ' ';
  }
  std::cout << '\n';

  return 0;
}
