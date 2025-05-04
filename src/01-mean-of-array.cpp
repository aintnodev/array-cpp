#include <iostream>

int main() {
  const int ARR_SIZE = 8;
  int arr[ARR_SIZE] = {1, 3, 4, 2, 6, 5, 8, 7};
  int mean = 0;

  for (int i = 0; i < ARR_SIZE; i++) {
    mean += arr[i];
  }

  float res = mean / (float)ARR_SIZE;
  std::cout << "mean: " << res << "\n";
}
