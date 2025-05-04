#include <iostream>

int main() {
  const int ARR_SIZE = 6;
  int arr[ARR_SIZE] = {1, 3, 6, 10, 12, 15};
  int avg, sum = 0, count = 0;

  for (int i = 0; i < ARR_SIZE; i++) {
    if (arr[i] % 6 == 0) {
      sum += arr[i];
      count++;
    }
  }

  avg = sum / count;

  std::cout << "avg: " << avg << "\n";
}
