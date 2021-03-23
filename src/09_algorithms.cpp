// Tutorial example 9
// STL algorithms in C++

#include <algorithm>
#include <iostream>
#include <vector>

// Print the elements of a vector
void print(std::vector<int> v) {
  for (int i : v) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
}

int main() {
  // Create a vector with some random numbers
  std::vector<int> v{10, 24, 1, 5, 16, 40, 2};
  
  // Print the vector before sorting
  print(v);

  // Sort the vector
  std::sort(v.begin(), v.end());

  // Print the sorted vector
  print(v);

  return 0;
}
