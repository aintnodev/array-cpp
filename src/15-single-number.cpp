#include <iostream>

int main() {
  const int ARR_SIZE = 5;
  int arr[ARR_SIZE] = {4, 1, 2, 1, 2};
  int unique = 0;

  for (int i = 0; i < ARR_SIZE; i++) {
    unique ^= arr[i];
  }

  std::cout << unique << "\n";
}
