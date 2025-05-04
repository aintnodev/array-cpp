#include <iostream>

int main() {
  const int ARR_SIZE = 4;
  int arr[ARR_SIZE] = {1, 15, 6, 3};
  int abs_sum = 0, dig_sum = 0;

  for (int i = 0; i < ARR_SIZE; i++) {
    abs_sum += arr[i];
    while (arr[i] > 0) {
      dig_sum += arr[i] % 10;
      arr[i] /= 10;
    }
  }

  if (abs_sum > dig_sum) {
    std::cout << abs_sum - dig_sum << "\n";
  } else {
    std::cout << dig_sum - abs_sum << "\n";
  }
}
