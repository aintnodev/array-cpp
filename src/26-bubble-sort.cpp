#include <iostream>

int main() {
  const int ARR_SIZE = 5;
  int arr[ARR_SIZE] = {4, 1, 3, 9, 7};

  for (int i = 0; i < ARR_SIZE; i++) {
    bool swapped = false;

    for (int j = 0; j < ARR_SIZE - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        std::swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }

    if (!swapped) {
      break;
    }
  }

  for (int i = 0; i < ARR_SIZE; i++) {
    std::cout << arr[i];
    if (i == ARR_SIZE - 1) {
      std::cout << "\n";
    } else {
      std::cout << ", ";
    }
  }
}
