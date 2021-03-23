// Tutorial example 11
// A simple example of classes

#include <iostream>

class Wallet {
 private:
  // Private data members
  int dollars;
  int cents;

 public:
  // Public methods
  void print() {
    std::cout << "Wallet contains " << dollars << " and " << cents
              << " cents!\n";
  }
  void set_dollars(int d) { dollars = d; }
  void set_cents(int c) { cents = c; }
};

int main() {
  // Create a wallet
  Wallet w;
  w.set_dollars(10);
  w.set_cents(7);

  // Print using our print method
  w.print();

  return 0;
}
