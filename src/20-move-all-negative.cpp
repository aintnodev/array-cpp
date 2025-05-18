#include <iostream>

int main() {
  const int ARR_SIZE = 8;
  int nrr[ARR_SIZE], arr[ARR_SIZE] = {1, -1, 3, 2, -7, -5, 11, 6};
  int count = 0;

  for (int i = 0; i < ARR_SIZE; i++) {
    if (arr[i] >= 0) {
      nrr[count] = arr[i];
      count++;
    }
  }

  for (int i = 0; i < ARR_SIZE; i++) {
    if (arr[i] < 0) {
      nrr[count] = arr[i];
      count++;
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
