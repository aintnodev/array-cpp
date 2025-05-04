#include <climits>
#include <iostream>

int main() {
  const int ARR_SIZE = 5;
  int arr[ARR_SIZE] = {2, 3, 5, 1, 3};
  int state = 1, max = INT_MAX;

  for (int i = 0; i < ARR_SIZE; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  for (int i = 0; i < ARR_SIZE; i++) {
    if (arr[i] * 2 > max) {
      max = arr[i];
      state = -1;
      break;
    }
  }

  std::cout << state << "\n";
}
