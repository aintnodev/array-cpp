#include <iostream>

int main() {
  const int ARR_SIZE = 5;
  int arr[ARR_SIZE] = {4, 2, 1, 5, 3};

  for (int i = 0; i < ARR_SIZE; i++) {
    if (i == ARR_SIZE) {
      std::cout << -1 << "\n";
    } else {
      if (arr[i + 1] < arr[i]) {
        std::cout << arr[i + 1] << "\n";
      } else {
        std::cout << -1 << "\n";
      }
    }
  }
}
