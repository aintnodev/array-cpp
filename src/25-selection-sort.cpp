#include <iostream>

int main() {
  const int ARR_SIZE = 5;
  int arr[ARR_SIZE] = {4, 1, 3, 9, 7};

  for (int i = 0; i < ARR_SIZE; i++) {
    int j = i;
    for (int k = i + 1; k < ARR_SIZE; k++) {
      if (arr[j] > arr[k]) {
        j = k;
      }
    }

    if (j != i) {
      std::swap(arr[i], arr[j]);
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
