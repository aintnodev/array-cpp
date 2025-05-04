#include <iostream>

int main(int argc, char **argv) {
  const int ARR_SIZE = 6;
  int arr[ARR_SIZE] = {12, 35, 1, 10, 34, 1};
  int res = -1, max = 0, smax = 0;

  for (int i = 0; i < ARR_SIZE; i++) {
    if (max < arr[i]) {
      smax = max;
      max = arr[i];
    }
    if (smax < arr[i] && arr[i] < max) {
      smax = arr[i];
    }
  }

  if (smax < max) {
    res = smax;
  }
  std::cout << "smax: " << res << "\n";
}
