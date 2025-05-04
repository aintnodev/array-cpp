#include <climits>
#include <iostream>

int main() {
  const int ARR_SIZE = 5;
  int candies[ARR_SIZE] = {2, 3, 5, 1, 3};
  bool arr[ARR_SIZE];
  int ext = 3, max = INT_MIN;

  for (int i = 0; i < ARR_SIZE; i++) {
    if (candies[i] > max) {
      max = candies[i];
    }
  }

  for (int i = 0; i < ARR_SIZE; i++) {
    if (candies[i] + ext >= max) {
      arr[i] = true;
    } else {
      arr[i] = false;
    }
    std::cout << arr[i] << "\n";
  }
}
