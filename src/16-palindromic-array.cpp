#include <iostream>

int reverse(int num) {
  int rnum = 0;

  while (num > 0) {
    rnum = rnum * 10 + num % 10;
    num /= 10;
  }

  return rnum;
}

int main() {
  const int ARR_SIZE = 3;
  int arr[ARR_SIZE] = {121, 131, 20};
  bool state = true;

  for (int i = 0; i < ARR_SIZE; i++) {
    if (arr[i] != reverse(arr[i])) {
      state = false;
      break;
    }
  }

  if (state) {
    std::cout << "TRUE" << "\n";
  } else {
    std::cout << "FALSE" << "\n";
  }
}
