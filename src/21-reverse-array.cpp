#include <iostream>

int main() {
  const int ARR_SIZE = 6;
  int nrr[ARR_SIZE], arr[ARR_SIZE] = {5, 7, 8, 1, 6, 3};

  for (int i = 0; i < ARR_SIZE; i++) {
    nrr[i] = arr[ARR_SIZE - 1 - i];
  }

  for (int i = 0; i < ARR_SIZE; i++) {
    std::cout << nrr[i];
    if (i == ARR_SIZE - 1) {
      std::cout << "\n";
    } else {
      std::cout << ", ";
    }
  }
}
