#include <climits>
#include <iostream>

int main() {
  const int ARR_SIZE = 4;
  int arr[ARR_SIZE] = {4000, 3000, 1000, 2000};
  int sum = 0, min = INT_MAX, max = INT_MIN;

  for (int i = 0; i < ARR_SIZE; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
    sum = sum + arr[i];
  }

  sum -= (min + max);
  std::cout << sum / (ARR_SIZE - 2) << std::endl;
}
