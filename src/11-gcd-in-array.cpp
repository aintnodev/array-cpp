#include <climits>
#include <iostream>

int main() {
  const int ARR_SIZE = 5;
  int arr[ARR_SIZE] = {2, 5, 6, 9, 10};
  int gcd = 1, max = INT_MIN, min = INT_MAX;

  for (int i = 0; i < ARR_SIZE; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  for (int i = max; i >= min; i--) {
    if (max % i == 0 && min % i == 0) {
      gcd = i;
    }
  }

  std::cout << "gcd: " << gcd << "\n";
}
