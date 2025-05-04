#include <climits>
#include <iostream>

int main() {
  const int ARR_SIZE = 6;
  int arr[ARR_SIZE] = {16, 17, 4, 3, 5, 2};
  int max = INT_MIN;

  for (int i = ARR_SIZE - 1; i >= 0; i--) {
    if (arr[i] >= max) {
      max = arr[i];
      std::cout << max << "\n";
    }
  }
}
