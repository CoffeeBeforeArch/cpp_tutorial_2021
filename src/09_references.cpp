// Tutorial example 9
// A basic example of references

#include <iostream>
#include <vector>

// Simple function that takes a vector by reference
void set_vector(std::vector<int> &v) {
  for (int i = 0; i < 10; i++) {
    v.push_back(i);
  }
}

int main() {
  // Create a vector and initialize it with our function
  std::vector<int> v;
  set_vector(v);

  // Print the contents of our vector
  for (int i : v) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
}
