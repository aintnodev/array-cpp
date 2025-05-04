#include <iostream>

int main() {
  int num = 101;
  const int ARR_SIZE = num + 1;
  bool arr[ARR_SIZE];

  for (int i = 0; i < ARR_SIZE; i++) {
    arr[i] = true;
  }

  arr[0] = false;

  for (int i = 2; i * i < ARR_SIZE; i++) {
    if (arr[i]) {
      for (int j = i * 2; j < ARR_SIZE; j += i) {
        arr[j] = false;
      }
    }
  }

  for (int i = 0; i < ARR_SIZE; i++) {
    if (arr[i]) {
      std::cout << i << "\n";
    }
  }
}
