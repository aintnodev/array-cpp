#include <iostream>

int main() {
  const int ARR_SIZE = 5;
  int nrr[ARR_SIZE], arr[ARR_SIZE] = {1, 2, 3, 4, 5};
  int d = 2;

  for (int i = 0; i < ARR_SIZE; i++) {
    int index = i + d;
    if (index >= ARR_SIZE) {
      while (index > ARR_SIZE - 1) {
        index = index - ARR_SIZE;
      }
      nrr[i] = arr[index];
    } else {
      nrr[i] = arr[index];
    }
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
