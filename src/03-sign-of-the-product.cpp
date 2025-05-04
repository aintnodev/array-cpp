#include <iostream>

int main() {
  const int ARR_SIZE = 7;
  int sign, arr[ARR_SIZE] = {-1, -2, -3, -4, 3, 2, 1};
  long long int prod = 1;

  for (int i = 0; i < ARR_SIZE; i++) {
    prod *= arr[i];
  }

  if (prod > 0) {
    sign = 1;
  } else if (prod < 0) {
    sign = -1;
  } else {
    sign = 0;
  }

  std::cout << "sign: " << sign << "\n";
}
