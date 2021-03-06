// Tutorial example 12
// Basic multi-threading in C++

#include <iostream>
#include <thread>
#include <vector>

// Print function called by each thread
void print(int tid) { std::cout << "PRINTING FROM THREAD " << tid << '\n'; }

int main() {
  // Launch threads
  std::thread t0(print, 0);
  std::thread t1(print, 1);
  std::thread t2(print, 2);
  std::thread t3(print, 3);

  // Wait for the threads to complete
  t0.join();
  t1.join();
  t2.join();
  t3.join();

  return 0;
}
