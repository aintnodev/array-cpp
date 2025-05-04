#include <iostream>

int main() {
  const int ARR_SIZE = 5;
  int arr[ARR_SIZE];

  for (int i = 0; i < ARR_SIZE / 2; i++) {
    arr[i] = i + 1;
    arr[ARR_SIZE - i - 1] = -(i + 1);
  }

  if (ARR_SIZE % 2 != 0) {
    arr[ARR_SIZE / 2] = ARR_SIZE;
    arr[(ARR_SIZE / 2) - 1] = arr[(ARR_SIZE / 2) - 1] - ARR_SIZE;
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
