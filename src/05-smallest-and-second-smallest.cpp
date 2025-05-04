#include <climits>
#include <iostream>

int main() {
  const int ARR_SIZE = 5;
  int arr[ARR_SIZE] = {2, 4, 3, 5, 6};
  int min = INT_MAX, sec_min = INT_MAX;

  for (int i = 0; i < ARR_SIZE; i++) {
    if (min > arr[i]) {
      sec_min = min;
      min = arr[i];
    }
    if (sec_min > arr[i] && arr[i] > min) {
      sec_min = arr[i];
    }
  }

  std::cout << "min: " << min << "\n";
  std::cout << "sec_min: " << sec_min << "\n";
}
