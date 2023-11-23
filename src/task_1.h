#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  if (a < b) {
    for (int i = a; i <= b; ++i) {
      std::cout << i << " ";
    }
  } else {
    for (int i = a; i >= b; --i) {
      std::cout << i << " ";
    }
  }

  return 0;
}