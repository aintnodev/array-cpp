#include <iostream>

int main() {
  const int ARR_SIZE = 4;
  int arr[ARR_SIZE] = {1, 2, 3, 4};
  long long int prod = 1;

  for (int i = 0; i < ARR_SIZE; i++) {
    prod *= arr[i];
  }

  prod = prod % 1000000007;
  std::cout << "prod: " << prod << "\n";
}
